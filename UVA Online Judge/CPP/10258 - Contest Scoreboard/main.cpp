#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <queue>
#include <algorithm>
#include <cctype>
#include <functional>
#include <iomanip>
#include <string>
#include <climits>
#include <stack>
#include <utility>
#include <cstdlib>
#include <map>
#include <sstream>


#define LL long long
#define scii(a,b) scanf("%d %d", &a,&b)
#define pl printf("\n")
#define sci(a) scanf ("%d", &a)

using namespace std;

struct node {
	int team, solved, penalty;
	node (int x, int y , int z) {
		team = x, solved = y, penalty = z;
	}
	bool operator < (node other) const {
		return team<other.team;
	}

};

bool compare( node &x, node &y) {
	if(x.solved>y.solved) return true;
	if((x.solved == y.solved) && (x.penalty<y.penalty)) return true;
	return false;
}

int main() {


	//freopen ("in.txt", "r", stdin);
	//freopen ("out.txt", "w", stdout);
	//ios_base::sync_with_stdio(0);cin.tie(0);

	int t;
	sci(t);
	cin.ignore();
	cin.ignore();
	int cases = 0;
	while (t--)  {
		if(cases>0) cout << endl;
		
		map < int, map < int, bool > > done;
		map < int, map < int, int > > penalty;
		string s;
		vector < node> lst;
		vector < int > participant;
		map < int, bool > doneP;
		while (getline(cin, s) && s.size()) {
			int team, problem, time;
			//if(s=="") break;;
			char verdict;
			stringstream ss(s);
			ss >> team;
			//if(team==0) continue;
			ss >> problem;
			ss >> time;
			ss >> verdict;

			//scii(team, problem);sci(time);cin >> verdict;
			//cout << team << " " << problem << " " << time << " " <<  verdict << endl;
			participant.push_back(team);
			if(!done[team][problem] && verdict=='I') {
					penalty[team][problem] += 20;
					
			}
			else if (!done[team][problem] && verdict=='C') {
				lst.push_back(node (team,1,penalty[team][problem]+time));
				doneP[team] = true;
				done[team][problem] = true;
			}
			
		}
		sort(lst.begin(), lst.end());
		for (unsigned int i=1; i<lst.size(); ) {
			if(lst[i].team==lst[i-1].team) {
				lst[i-1].solved += 1;
				lst[i-1].penalty += lst[i].penalty;
				lst.erase(lst.begin()+i);
			}
			else i++;

		}
		sort(lst.begin(), lst.end(), compare);
		for (unsigned int j=0; j<lst.size(); j++) {
				cout << lst[j].team << " " << lst[j].solved << " " << lst[j].penalty << endl;
		}
		sort(participant.begin(), participant.end());
		for (unsigned int j=0; j<participant.size(); j++) { 
			int x = participant[j];
			if(!doneP[x]) { 
				cout << x << " 0 0" <<endl;
				doneP[x] = true;
			}
		}
		

		cases++;

	}






	return 0;
}

