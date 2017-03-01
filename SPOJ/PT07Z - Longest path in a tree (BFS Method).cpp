#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <cstring>
#include <climits>


using namespace std;

int main() { 
	//freopen ("in.txt", "r", stdin);
	
	int t; 
	scanf ("%d", &t);
	
	vector < int > g[t+1];
	
	int x,y;
	for (int i=1; i<t; i++) { 
		
		scanf ("%d %d", &x, &y);
		g[x].push_back(y);
		g[y].push_back(x);		
		}
		
	int dist = INT_MIN, node;
	
	queue < int > q;
	
	int vis[10010];
	memset(vis, -1, sizeof(vis));
	
	q.push(1);
	vis[1]=0;
	node = 1;
	
	dist = max(dist, vis[1]);
	
	while (!q.empty()) { 
		
		int u = q.front();
		q.pop();
		
		int l = g[u].size();
		//cout << l << endl;
		for (int i=0; i<l; i++) { 
			int v= g[u][i];
			
			if(vis[v]==-1) { 
				vis[v] = vis[u]+1;
				if(vis[v]>dist) {
					dist = vis[v];
					node = v;
				}
				q.push(v);
				}
			}
			}
		memset(vis, -1, sizeof(vis));
		
		
		
		int nnode=node;

		
		dist = INT_MIN;
		vis[node]=0;
		dist = max(dist,vis[node]);

		q.push(node);
		while (!q.empty()) { 
			int u = q.front();
			q.pop();
			
			int l = g[u].size();
			//cout << u << endl;
			for (int i=0; i<l; i++) { 
				
				int v = g[u][i];
				
				if(vis[v]==-1) { 
					vis[v]= vis[u]+1;
				
					if(vis[v]>dist) { 
						
						dist=vis[v];
						nnode = v;
						//cout << dist << endl;
						}
					q.push(v);
					
				}
				
			}
			
		}
		cout << dist << endl;

	
	
	
	
	return 0;
}
