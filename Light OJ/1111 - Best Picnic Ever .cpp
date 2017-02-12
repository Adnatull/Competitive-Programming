#include <bits/stdc++.h>

using namespace std;

int main() { 
	
	//freopen ("in.txt", "r", stdin);
	
	int t;
	scanf ("%d",&t);
	
	int k,n,m;
	
	for (int i=1; i<=t; i++) { 
		
		scanf ("%d %d %d",&k, &n, &m);
		
		int people[k+1];
		
		for (int j=1; j<=k;j++)
			scanf ("%d",&people[j]);
			
		map < int, vector < int > > g;
		
		int x,y;
		for (int j=1; j<=m; j++) { 
			scanf ("%d %d",&x,&y);
			g[x].push_back(y);
		}
		
		int visit[n+1];
		memset(visit,0, sizeof visit);
		
		int mac = INT_MIN;
		for (int j=1; j<=k;j++) { 
		
			queue < int > q;
			q.push(people[j]);
			visit[people[j]]++;
			mac = max(visit[people[j]], mac);
			map < int, bool > check;
			check[people[j]] = true;
			
			while (!q.empty()) { 
			
				int u = q.front();
				q.pop();
				
				int z = g[u].size();
				
				for (int k=0; k<z; k++) { 
				
					int v = g[u][k];
					if(!check[v]) { 
					
						check[v] = true;
						visit[v]++;
						mac = max(visit[v], mac);
						q.push(v);
						
					}
					
				}
				
			}
			
		}
		
		int cot = 0;
		for (int j=1; j<=n; j++) { 
		
				if(visit[j]==mac)
					cot++;
			
		}
		
		printf ("Case %d: %d\n",i,cot);
		
		
		
	}
	
	return 0;
}
