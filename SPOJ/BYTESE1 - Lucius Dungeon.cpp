#include <bits/stdc++.h>

using namespace std;

int main() { 
	
	//freopen ("in.txt", "r", stdin);
	
	int t;
	scanf ("%d", &t);
	
	while (t--) { 
		
		int r, c,x;
		scanf ("%d %d",&r, &c);
		
		map < int , map < int , int > > cost;
		
		//vector < pair < pair < int, int > , int > > cost;
		
		for (int i=1; i<=r; i++) { 
			
			for (int j=1; j<=c; j++) { 
				scanf ("%d",&x);
				cost[i][j] = x;				
				}			
		}
		
		int y, w;
		
		scanf ("%d %d %d",&x, &y, &w);
		
		//map < int, map < int , int > > dist;
		
		int dist[110][110];
		
		for (int i=0; i<110; i++) 
			for (int k=0; k<110; k++)
				dist[i][k]=INT_MAX;
		
		dist[1][1] = cost[1][1];
		
		queue < pair < int, int > > q;
		
		q.push(make_pair(1,1));
		
		while (!q.empty()) { 
			
				int u = q.front().first;
				int v = q.front().second;
				
				q.pop();
				
				
				
				int a,b;
				
				a = u-1;
				b = v;
				
				if(a>=1 && a<=r && b>=1 && b<=c && dist[u][v]+cost[a][b]<dist[a][b]) { 
					dist[a][b]=dist[u][v]+cost[a][b];
					
					q.push(make_pair(a,b));					
					
					}
				a = u;
				b = v-1;
				if(a>=1 && a<=r && b>=1 && b<=c && dist[u][v]+cost[a][b]<dist[a][b]) { 
					dist[a][b]=dist[u][v]+cost[a][b];
					
					q.push(make_pair(a,b));					
					
					}
				a = u;
				b = v+1;
				if(a>=1 && a<=r && b>=1 && b<=c && dist[u][v]+cost[a][b]<dist[a][b]) { 
					dist[a][b]=dist[u][v]+cost[a][b];
					
					q.push(make_pair(a,b));					
					
					}
				a = u+1;
				b = v;
				if(a>=1 && a<=r && b>=1 && b<=c && dist[u][v]+cost[a][b]<dist[a][b]) { 
					dist[a][b]=dist[u][v]+cost[a][b];
					
					q.push(make_pair(a,b));					
					
					}
		}
		
		if(dist[x][y]<=w) { 
			cout << "YES" << endl << w-dist[x][y] << endl;
			}
		else
			cout << "NO" << endl;
		
		
	}
	
	return 0;
}
