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
	int start;
	int destination;
	int cost;
	
	node(int a,int b, int c) { 
		start = a, destination = b, cost = c;
	};
	
};

int main() { 
	
	
	//freopen ("in.txt", "r", stdin);
	//freopen ("out.txt", "w", stdout);
	//ios_base::sync_with_stdio(0);cin.tie(0);
	
	int test;
	sci(test);
	int star, wormhole;
	for (int i=1; i<=test; i++) { 
		scii(star, wormhole);

		vector < node> graph;
		int x,y,z;
		for (int j=0; j<wormhole; j++) { 
			scii(x,y);sci(z);
			graph.push_back(node(x,y,z));
		}
		
		int dist[star+1];
		for (int j=0; j<=star; j++) dist[j] = INT_MAX;
		dist[0] = 0;
		for (int j=0; j<star; j++) { 
			for (int k=0; k<wormhole; k++) { 
				x = graph[k].start;
				y = graph[k].destination;
				z = graph[k].cost;
				if(dist[y]>dist[x]+z) dist[y] = dist[x]+z;				
			}			
		}
		
		bool cycle = false;
		for (int k=0; k<wormhole; k++) { 
			x = graph[k].start;
			y = graph[k].destination;
			z = graph[k].cost;
			if(dist[y]>dist[x]+z) { 
				cycle = true;
				break;
			}			
		}

		if(cycle) printf ("possible\n");
		else printf ("not possible\n");
		

		
	}
	
		
		

	
	
	
	return 0;
}

