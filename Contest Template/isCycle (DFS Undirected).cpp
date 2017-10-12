
//isCycle (DFS Undirected) begins
vector <int> graph[123456];

// Initially int parent is infinity.
bool mark[123456];

bool iscycle(int n, int parent) {

    mark[n] = true;
    int length = graph[n].size();
    for (int i=0; i<length; i++) {

        int v = graph[n][i];
        if(!mark[v]){
            if(iscycle(v,n)) return true;
        } else if(v!=parent) return true;
    }
    return false;
}

//isCycle ends
