#include <bits/stdc++.h>

using namespace std;

int main() { 
	
	
	//freopen ("in.txt", "r", stdin);
	
	int n,e,t;
	cin >> n >> e >> t;
	
	int m;
	cin >> m;
	map < int , vector < int > > g;
	
	map < int, map < int, int > > time;
	
	int x,y,z;
	
	for (int i=1; i<=m; i++) { 
		
		cin >> x >> y >> z;
		
		g[x].push_back(y);
		time[x][y] = z;		
	}
	int c = 0;
	for (int i=1; i<=n; i++) { 
		
		priority_queue < int , vector <int>, greater <int> > q;
		int shomoy[11000];
		for (int j=1; j<=11000; j++ )
			shomoy[j]=INT_MAX;
		
		q.push(i);
		
		shomoy[i]=0;
		
		int parent[110];

		
		while (!q.empty() ) { 
			
			int u = q.top();
			q.pop();
			
			for (int j=0; j<g[u].size(); j++) { 
				
				int v = g[u][j];
				if( shomoy[u]+time[u][v] < shomoy[v] ) { 
					shomoy[v] = shomoy[u]+time[u][v];
					parent[v]=u;
					q.push(v);					
				}
				
			}
			
		}
		int z=e;
		vector<int>path;
		v.push_back(z);
		while(z!=i){
			
			
			z=parent[z];
			v.push_back(z);
			}
			
		if(shomoy[e] <= t)
					c++;
		
	}
	cout << c << endl;
	
	
	return 0;
}
