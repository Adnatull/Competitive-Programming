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
	int team;
	bool exist;
	map < int, bool > accepted;
	map < int, int > penalty;
	
	
	
};

struct finalNode { 
	int team;
	int solved;
	int time;
	
	finalNode(int x, int y, int z) { 
		team = x;
		solved = y;
		time = z;
	}
	
	bool operator < (finalNode other) const { 
			if(solved==other.solved) { 
				if(time==other.time) return team<other.team;
				else return time<other.time;
			}
			return solved>other.solved;
	}
	
};

int main() { 
	
	
	//freopen ("in.txt", "r", stdin);
	//freopen ("out.txt", "w", stdout);
	//ios_base::sync_with_stdio(0);cin.tie(0);
	
	int t;
	int cases = 0;
	sci(t);
	cin.ignore();
	cin.ignore();
	while (t--) { 
		if(cases>0) cout << endl;
		
		
		string s;
		map < int, node > participant;
		int team, problem, time;
		char  verdict;
		while (getline(cin,s) && (int)s.size()) { 
			stringstream ss(s);
			ss >> team;
			ss >> problem;
			ss >> time;
			ss >> verdict;
			participant[team].exist = true;
			if(verdict=='C' && !participant[team].accepted[problem]) { 
				participant[team].accepted[problem] = true;
				participant[team].penalty[problem]+=time;
			}
			else if(verdict == 'I' && !participant[team].accepted[problem]) { 
					participant[team].penalty[problem]+=20;
			}
		}
		vector < finalNode > lst;
		for (int i=1; i<=100; i++) { 
			if(participant[i].exist) { 
				int cnt = 0;
				int penalty = 0;
				for (int j=1; j<=10; j++) { 
					if(participant[i].accepted[j]) { 
						cnt +=1;
						penalty += participant[i].penalty[j];
					}
				}
				lst.push_back(finalNode(i,cnt,penalty));
			}
			
		}
		
		sort(lst.begin(), lst.end());
		for (unsigned int j=0; j<lst.size(); j++) cout << lst[j].team << " " << lst[j].solved << " " << lst[j].time << endl;
		cases++;
		
	}
	
	
	
		
		

	
	
	
	return 0;
}

