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
	scanf ("%d", &t);
	int node, exit, time, edge;
	for (int i=1; i<=t; i++) { 
		if(i>1) printf ("\n");
		scanf ("%d %d %d %d" , &node, &exit, &time, &edge);
		
		vector < pair < int, int> > graph[node+1];
		int x,y,z;
		for (int j=1; j<=edge; j++) { 
			scanf ("%d %d %d", &x, &y, &z);
			graph[y].push_back(make_pair(x,z));
		}
		
		int dist[node+1];
		for (int j=0; j<node+1; j++) dist[j] = INT_MAX;
		
		dist[exit] = 0;
		priority_queue < int > q;
		q.push(-exit);
		
		while (!q.empty()) { 
			int u = q.top();
			u = abs(u);
			q.pop();
			for (unsigned int j=0; j<graph[u].size(); j++) { 
				int v = graph[u][j].first;
				if(dist[u]+graph[u][j].second<dist[v]) { 
					dist[v] = dist[u]+graph[u][j].second;
					q.push(-v);
				}
			}
		}
		int cnt = 0;
		for (int j=1; j<=node; j++) if(dist[j]<=time) cnt++;
		
		printf ("%d\n", cnt);
		
		
	}
		
	
	return 0;
}

