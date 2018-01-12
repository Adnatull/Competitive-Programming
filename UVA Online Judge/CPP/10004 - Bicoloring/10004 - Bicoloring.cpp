#include<bits/stdc++.h>

using namespace std;

int main() {

 //   freopen("in.txt","r",stdin);

    int color[210];




    int N, E;

    while (scanf("%d",&N)==1) {

    vector <int> edge[210];
        for (int i=0;i<210;i++)
            color[i]=-1;

        if (N==0)
            break;

        scanf("%d",&E);

        int x, y;

        for (int i=0;i<E;i++) {

            scanf("%d %d",&x,&y);

            edge[x].push_back(y);
            edge[y].push_back(x);
        }

        int source = 0;

        queue <int> q;
        color[source]=0;
        q.push(source);

        int f=0;
        while (!q.empty()){

            int u = q.front();
            q.pop();

            int siz=edge[u].size();

            for (int j=0;j<siz;j++){

                if( color[edge[u][j]]==-1 ){
                    if (color[u]==0)
                        color[edge[u][j]]=1;
                    else
                        color [edge[u][j]] = 0;
                    q.push(edge[u][j]);
                }
                else {
                    if(color[u]==color[edge[u][j]]){
                        f=1;
                        break;
                    }
                }

            }
            if(f==1)
                break;
        }
        if(f==1)
            printf("NOT BICOLORABLE.\n");

        else
            printf("BICOLORABLE.\n");


    }

    return 0;
}
