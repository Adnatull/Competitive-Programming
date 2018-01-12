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

#define LL long long 


using namespace std;

int main() { 
	
	//freopen ("in.txt", "r", stdin);
	//freopen ("out.txt", "w", stdout);
	//ios_base::sync_with_stdio(0);cin.tie(0);
	
	int t;
	scanf ("%d",&t);
	int n,m;
	for (int i=1; i<=t; i++) {
		//cin >> n >> m;
		scanf ("%d %d", &n, &m);
		int a[n][m];
		int cost[n][m];
		for (int j=0; j<n; j++) for (int k=0; k<m; k++) scanf("%d", &a[j][k]),cost[j][k] = INT_MAX;
		
		priority_queue < pair< int, pair< int, int> > > q;
		q.push(make_pair(a[0][0],make_pair(0,0)));
		cost[0][0] = a[0][0];
		
		while (!q.empty() ) {
			int u = q.top().second.first;
			int v = q.top().second.second;
			q.pop();
			int x = u-1, y = v;
			
			if(x>=0 && x<n && y>=0 && y<m && cost[u][v]+a[x][y]<cost[x][y]) { 
					cost[x][y] = cost[u][v]+a[x][y];
					q.push(make_pair(-cost[x][y],make_pair(x,y)));	
			}
			x = u, y = v-1;
			if(x>=0 && x<n && y>=0 && y<m && cost[u][v]+a[x][y]<cost[x][y]) { 
					cost[x][y] = cost[u][v]+a[x][y];
					q.push(make_pair(-cost[x][y],make_pair(x,y)));
			}
			x = u+1, y = v;
			if(x>=0 && x<n && y>=0 && y<m && cost[u][v]+a[x][y]<cost[x][y]) { 
					cost[x][y] = cost[u][v]+a[x][y];
					q.push(make_pair(-cost[x][y],make_pair(x,y)));
			}
			x = u, y = v+1;
			if(x>=0 && x<n && y>=0 && y<m && cost[u][v]+a[x][y]<cost[x][y]) { 
					cost[x][y] = cost[u][v]+a[x][y];
					q.push(make_pair(-cost[x][y],make_pair(x,y)));
			}
		}
		printf ("%d\n", cost[n-1][m-1]);

		
		
		
		
	} 
	
	
	
	return 0;
}
