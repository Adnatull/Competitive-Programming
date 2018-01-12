#include<bits/stdc++.h>

using namespace std;

int main() {

  //  freopen ("in.txt", "r", stdin);

    int a;
    int i =1;

    int test =1;

    vector <int> g[25];
    while ( cin >> a) {
        int x;
        for (int j=0;j<a;j++){
            cin >> x;
            g[i].push_back(x);
            g[x].push_back(i);
        }
        int y;
        for (int j=2;j<=19;j++) {
            cin >> x;

            for (int k=1;k<=x;k++){
                cin >> y;
                g[j].push_back(y);
                g[y].push_back(j);
            }
        }/*
if (test > 1)
            printf ("\n");*/
      /*  for (int k=1;k<=19;k++) {

            cout << k << " = ";
            for (int j=0;j<g[k].size();j++){
                cout << g[k][j] << " ";
            }
            cout << endl;

        }*/

        int n;



        printf ("Test Set #%d\n",test);

        cin >> n;

        for (int l=1;l<=n;l++) {

            cin >> x >> y;
          //  if(x>y)
           //     swap(x,y);

            bool vis[25];
            int dis[25];

            memset (vis,0,sizeof(vis));
            memset (dis,0, sizeof (dis) );

            queue < int > q;

            q.push(x);

            vis[x]=1;

            while (!q.empty()) {

                int u = q.front();

                q.pop();

                for (int j=0;j<g[u].size();j++) {

                    int v = g[u][j];

                    if(vis[v]==0) {

                        vis[v]=1;
                        dis[v]=dis[u]+1;
                        q.push(v);

                    }

                }
            }

            if(x<10)
                printf (" %d",x);
            else
                printf ("%d",x);

            printf (" to ");

            if(y<10)
                printf (" %d",y);
            else
                printf ("%d",y);

            printf (":");

            if(dis[y]<10)
                printf(" %d",dis[y]);
            else
                printf ("%d",dis[y]);
            printf ("\n");

           // cout << dis[y] << endl;



        }
        printf ("\n");

        memset ( g, 0, sizeof(g));

        i=1;
        test++;
    }

    return 0;
}
