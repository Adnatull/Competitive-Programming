
// Light OJ 1094


#include <bits/stdc++.h>

using namespace std;


int bfs (int source, map < int, map < int, int > >  cost, vector < int > g[], int n ) { 
	
	priority_queue < int, vector < int >, greater <int> > q;
			int dist[n+1];
			for (int k=0; k<n+1; k++)
				dist[k] = INT_MAX;

			
			q.push(source);

			dist[source]=0;
			
			//map < int, bool > visit;
			//visit[j]=false;
			
			int start = source;
			int mac = INT_MIN;
			while (!q.empty() ) { 
				
				int x = q.top();
				q.pop();
				int z= g[x].size();
				for (int k=0; k<z; k++) { 
					
					int y= g[x][k];
					
					if(dist[x]+cost[x][y]<dist[y]) 
					//if(!visit[y])
					{ 	
						//visit[y]=true;
						dist[y]=dist[x]+cost[x][y];
						if(dist[y]>mac) { 
							start = y;
								
						}
						mac = max(mac, dist[y]);
						q.push(y);
							
					}
					
					}
			}
			return start;
	
}


int main() { 

	//freopen ("in.txt", "r", stdin);
	//freopen ("out.txt", "w", stdout);
	
	int t;
	scanf ("%d",&t); 
	for (int i=1; i<=t; i++) { 
		
		int n;
		scanf ("%d",&n);
		int x,y,z;
		
		vector < int > g[100005];
		
		map < int, map < int, int > > cost;

		
		for (int j=1; j<n; j++) { 
			
			scanf("%d %d %d",&x,&y,&z);
			g[x].push_back(y);
			g[y].push_back(x);
			cost[x][y]=z;
			cost[y][x]=z;
		}
		
		int mac = INT_MIN; // for max value
		
		
		int start = bfs ( 0, cost, g,n );
		
		//for (int j=1; j<=n; j++) { 
			
			priority_queue < int, vector < int >, greater <int> > q;
			int dist[n+1];
			for (int k=0; k<n+1; k++)
				dist[k] = INT_MAX;

			
			q.push(start);

			dist[start]=0;
			
			//map < int, bool > visit;
			//visit[j]=false;
			while (!q.empty() ) { 
				
				x = q.top();
				q.pop();
				z= g[x].size();
				for (int k=0; k<z; k++) { 
					
					y= g[x][k];
					
					if(dist[x]+cost[x][y]<dist[y]) 
					//if(!visit[y])
					{ 	
						//visit[y]=true;
						dist[y]=dist[x]+cost[x][y];
						mac = max(mac, dist[y]);
						q.push(y);
							
					}
					
					}
			}	
	//	}
		printf ("Case %d: %d\n",i,mac);
		

	}
	
	return 0;
}
