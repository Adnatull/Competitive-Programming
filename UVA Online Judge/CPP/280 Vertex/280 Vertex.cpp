#include <bits/stdc++.h>

using namespace std;
map<int, vector<int>>graph;
int main() {
    int n;
    while(cin >> n) {
        if(n == 0) break;
        graph.clear();
        int e;
        while(cin >> e) {
            if(e == 0) break;
            int x;
            while(cin >> x) {
                if(x == 0) break;
                graph[e].push_back(x);
            }
        }
        cin >> e;
        for(int i=0; i<e; i++) {
            int x;
            map<int, bool > vis;
            queue<int> q;
            cin >> x;
            q.push(x);
            while(!q.empty()) {
                int z = q.front();
                q.pop();
                for(int j=0; j<graph[z].size(); j++) {
                        int y = graph[z][j];
                    if(vis[y] == false) {
                        vis[y] = true;
                        q.push(y);
                    }
                }
            }
            vector<int> ans;
            for(int j=1; j<=n; j++) {
                if(vis[j] == false) {
                    ans.push_back(j);
                }
            }
            cout << ans.size();
            for(int j=0; j<ans.size(); j++) {
                cout << " " << ans[j] ;
            }
            cout << endl;
        }
    }
    return 0;
}
