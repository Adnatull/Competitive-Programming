
int parent[1234567];

void setInitialParent() { 
		for (int i=0; i<1234567; i++) parent[i] = i;
	
}

int fin (int r) { 
	if(parent[r]==r) return r;
	return parent[r] = fin(parent[r]);	
}

void unio (int x, int y) { 
	
		int u = fin(x);
		int v = fin(y);
		
		parent[u] = parent[v];
}

struct node { 
	int u, v, cost;
	
	node(int x,int y, int z) {
		u = x, v = y, cost = z;		
	 };
	 
	 bool operator < (node other) const {
			return cost<other.cost;
		  };
	
};

int main() { 
	
	
	//freopen ("in.txt", "r", stdin);
	//freopen ("out.txt", "w", stdout);
	//ios_base::sync_with_stdio(0);cin.tie(0);
	
	int m,n;//m is number of nodes & n is number of edges
	while (scii(m,n) && m!=0 && n!=0) { 
		setInitialParent();
		
		int x,y,z;
		vector < node > edge;

	
		for (int i=0; i<n; i++) { 
			scii(x,y);sci(z);
	

			edge.push_back(node(x,y,z));
		}
		sort(edge.begin(),edge.end());
		int realCost = 0;
		for (int i=0; i<n; i++) { 
			int u = edge[i].u;
			int v = edge[i].v;
			int cost = edge[i].cost;
			x = fin(u), y = fin(v);
			if(x!=y) { 
				
				unio(x,y);
				realCost += cost;
			}
		}
		

		printf ("%d\n", realCost);

		
	}
	
	
		
		

	
	
	
	return 0;
}
