#include <bits/stdc++.h>

using namespace std;

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
	int u, v;
	double cost;

	node(int x,int y, double z) {
		u = x, v = y, cost = z;
	 };

	 bool operator < (node other) const {
			return cost<other.cost;
		  };

};


int main() {

   // freopen ("in.txt", "r", stdin);
   // freopen ("out.txt", "w", stdout);
        int cases = 1;
    int n,e,q;
    while (cin >> n >> e >> q) {
        if(n==0 && e==0 && q==0) break;
        if(cases>1) cout << endl;
        setInitialParent();
        vector < node > edge;
        vector < pair < int, double > > graph[110];
        int x,y;
        double d;

      //  int start;
        for (int i=0; i<e; i++) {
            cin >> x >> y >> d;
            edge.push_back(node(x,y,d));
            edge.push_back(node(y,x,d));

           // start = x;
        }
        sort(edge.begin(),edge.end());


        vector < int > lst;
        int visit[110];
        double fcost[110][110];
        memset(visit, 0, sizeof visit);
		for (int i=0; i<edge.size(); i++) {
			int u = edge[i].u;
			int v = edge[i].v;
			double cost = edge[i].cost;
			x = fin(u), y = fin(v);
			if(x!=y) {
                if(visit[u]==false) lst.push_back(u),visit[u]=true;
              //  cout << u << " " << v << endl;

                if(visit[v]==false) lst.push_back(v),visit[v]=true;
				unio(x,y);
				graph[u].push_back(make_pair(v,cost));
				graph[v].push_back(make_pair(u,cost));
				fcost[u][v] = cost;
				fcost[v][u] = cost;

				//realCost += cost;
			}
		}

		int from, to;
		printf ("Case #%d\n",cases);
            cases++;
		for (int i=1; i<=q; i++) {
            cin >> from >> to;
            //cout << from << " " << to << endl;
//
            bool check[110];
            for (int j=0; j<110; j++) check[j] = false;
            check[from] = true;
            queue < int > q;

            q.push(from);
            int parent[110];
            while (!q.empty()) {
                int u=q.front();
                q.pop();
                for (int j=0; j<graph[u].size(); j++) {
                    int v = graph[u][j].first;
                    double cost = graph[u][j].second;
                    if(!check[v]) {
                        check[v] = true;
                        parent[v]=u;

                        q.push(v);
                    }

                }

            }

            if(!check[from] || !check[to]) {
                cout << "no path" << endl;
            }
            else {
                double mac = 0;
                while (parent[to]!=from) {
                    int u = to;
                    int v = parent[u];
                    mac = max(mac, fcost[u][v]);
                    to = parent[to];
                }
                mac = max(mac, fcost[from][to]);


                cout << mac << endl;
            }

		}



    }

    return 0;
}
