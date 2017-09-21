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
#define scii(a,b) scanf("%d %d", &a,&b)
#define pl printf("\n")
#define sci(a) scanf ("%d", &a)

using namespace std;

struct node { 
	int cost, vertex;
	
	node (int x, int y) { 
		cost = x, vertex = y;
	}
	
	bool operator < (node other) const { 
		return cost>other.cost;
	}
	
	
};




int main() { 
	
	
	//freopen ("in.txt", "r", stdin);
	//freopen ("out.txt", "w", stdout);
	//ios_base::sync_with_stdio(0);cin.tie(0);
	
	int m,n;
	while (scii(m,n) && m && n) { 
		
		vector <  pair < int , int > > graph [m+1];
		
		int x, y, z;
		int total_cost = 0;
		for (int i=1; i<=n; i++) { 
			scii(x,y);sci(z);
			total_cost+=z;
			graph[x].push_back(make_pair(y,z));
			graph[y].push_back(make_pair(x,z));
		}
		

		priority_queue < node > q; 
		
		q.push(node(0,0));
		int cost = 0;

		vector < bool > visited ;
		visited.assign(m+1,false);
		while(!q.empty()) { 

			int u = q.top().vertex;
			int tcst = abs(q.top().cost);
			q.pop();
			if(!visited[u]) {
				visited[u] = true;
	
				cost += tcst;
				
			
				for (unsigned int j=0; j<graph[u].size(); j++) { 
					int v = graph[u][j].first;
					int cst = graph[u][j].second;
					if(!visited[v]) { 
						q.push(node(cst,v));
					}
				}
			}
			
			
		}

		
		printf ("%d\n", total_cost-cost);
		
	}
	
	
	
	
		
		

	
	
	
	return 0;
}

