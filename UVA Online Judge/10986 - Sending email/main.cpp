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
	
	int test;
	scanf ("%d", &test);
	int n,m,s,t;
	for (int i=1; i<=test ; i++) { 
		scanf ("%d %d %d %d", &n, &m, &s, &t);
		
		vector < pair < int, int> > graph[n+1];
		
		int x,y,z;
		for (int j=1; j<=m; j++) { 
			scanf ("%d %d %d", &x, &y, &z);
			graph[x].push_back(make_pair(y,z));
			graph[y].push_back(make_pair(x,z));			
		}
		
		int dist[n+1];
		for (int j=0; j<=n; j++) dist[j] = INT_MAX;
		dist[s] = 0;
		priority_queue < pair<int, int> > q;
		q.push(make_pair(0,s));
		
		while(!q.empty()) { 
			int u = q.top().second;
			u = abs(u);
			q.pop();
			for (unsigned int j=0; j<graph[u].size(); j++) { 
				int v = graph[u][j].first;
				if(dist[v]>dist[u]+graph[u][j].second) { 
					dist[v] = dist[u]+graph[u][j].second;
					q.push(make_pair(-dist[v],v));
				}				
			}			
		}
		printf ("Case #%d: ",i);
		if(dist[t]==INT_MAX) printf ("unreachable\n");
		else printf ("%d\n", dist[t]);
		
	}
	
		
		

	
	
	
	return 0;
}
