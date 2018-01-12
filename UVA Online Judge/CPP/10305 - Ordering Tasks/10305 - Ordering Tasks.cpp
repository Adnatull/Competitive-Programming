#include<bits/stdc++.h>

using namespace std;

int main () {

    //freopen ("in.txt", "r", stdin);

    int n, m;

    while (cin >> n >> m) {

        if(n==0 && m==0)
            break;

        int a[n+1],x,y,indegree[n+1],outdegree[n+1];

        int visited[n+1];

        memset (indegree,0,sizeof(indegree));
        memset (outdegree,0,sizeof(outdegree));
        memset (visited,0,sizeof(visited));

        map <int, vector<int> > g;

        for (int i=1;i<=m;i++){

            cin >> x >> y;

            g[x].push_back(y);
            outdegree[x]++;
            indegree[y]++;
        }

        vector <int > ans;
        for (int i=1;i<=n;i++) {

            for (int j=1;j<=n;j++) {

                if(indegree[j]==0 && visited[j]==0){
                        visited[j]=1;
                        ans.push_back(j);



                }

            }

            for (int j=1;j<=n;j++) {

                if(visited[j]==1){
                    visited[j]=2;
                    for (int k=0;k<g[j].size();k++){
                            indegree[g[j][k]]--;
                        }
                }
            }

        }

        for (int i=0;i<ans.size();i++){
            if(i>0)
                cout << " ";
            cout << ans[i];
        }
        cout << endl;

    }


    return 0;
}
