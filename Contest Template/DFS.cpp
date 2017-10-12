void dfs (int source, bool visited[], vi graph[] ) { 
	
	if(visited[source]) return;
	visited[source]=true;
	int l = graph[source].size();
	rep(i,l) { 
		int v = graph[source][i];
		if(!visited[v]) dfs(v,visited,graph);
	}
	
}
