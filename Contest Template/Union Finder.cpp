

//Union Finder Begins


int parent[200010];

int fin (int r) { 
	if(parent[r]==r) return r;
	return parent[r] = fin(parent[r]);	
}

void unio (int x, int y) { 
	
		int u = fin(x);
		int v = fin(y);
		
		parent[u] = parent[v];
}

//Union Finder Ends
