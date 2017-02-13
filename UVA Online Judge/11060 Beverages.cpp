#include <bits/stdc++.h>

//macros
#define sc scanf
#define pr printf
#define mp make_pair
#define pb push_back
#define sz size
#define szf sizeof


//typedefs/enums
typedef long long LL;
typedef unsigned long long ULL;
typedef long L;
typedef unsigned long UL;

using namespace std;

int main() { 
	
	//freopen ("in.txt", "r", stdin);
	int cases = 1;
	int t;
	while (sc("%d",&t)==1 ) { 
		
		string bev[t];
		for (int i=0; i<t; i++)
				cin >> bev[i];
				
		int n;
		sc("%d",&n);
		
		map < string, int > indegree;
		map < string, vector < string >  > g;
		
		string s,p;
		for (int i=0; i<n; i++) { 
			cin >> s >> p;
			indegree[p]++;
			g[s].pb(p);			
		}
		
		vector < string > path;
		for (int k=0; k<t; k++) {
		for (int i=0; i<t; i++) {
				
			string u = bev[i];
			if(indegree[u]==0) { 
				path.pb(u);
				indegree[u]--;
				
				for (int j=0; j<g[u].sz(); j++) { 
					string v = g[bev[i]][j];
					indegree[v]--;
					}
				break;
			}
			
			
		}
	}
		pr("Case #%d: Dilbert should drink beverages in this order:",cases);
		for (int i=0; i<path.sz(); i++)
			cout << " " << path[i] ;
			cout << "." << endl;
			cout << endl;
			cases++;
	
		
		
	}
	
	
	
	
	return 0;
}
