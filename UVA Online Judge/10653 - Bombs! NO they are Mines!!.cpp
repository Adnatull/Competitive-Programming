#include<bits/stdc++.h>

using namespace std;


#define pii pair <int, int>

int main () {

   // freopen ( "in.txt", "r", stdin );

   // freopen ( "out.txt", "w", stdout );

    int r,c;

    while (scanf ("%d %d",&r, &c) ) {

        if( r==0 && c==0 )
            break;

        int n;

        cin >> n;

        bool mines[r][c];
        bool vis[r][c];
        int dist[r][c];

        memset (mines,0,sizeof(mines));
        memset (vis, 0, sizeof(vis));
        memset (dist,0,sizeof(dist));

        int x,d,y;

        for (int i=1;i<=n;i++) {


            cin >> x >> d;

            for (int j=1;j<=d;j++) {
                cin >> y;
                mines[x][y]=1;
            }

        }

        int sx,sy;
        cin >> sx >> sy;

        int dx,dy;
        cin >> dx >> dy;

        queue < pair <int, int > > q;

        q.push(pii(sx,sy));



        vis[sx][sy]=1;

        dist[sx][sy]=0;

        int xx[] = {1,-1,0,0}, yy[]= {0,0,1,-1};


        while (!q.empty()) {

            pair <int , int > u;
            u = q.front();
            q.pop();

            for (int i=0;i<4;i++) {

                int uu = u.first+xx[i];
                int vv = u.second+yy[i];
               // cout << uu << " " << vv << endl;

                if( vis[uu][vv]==0 && mines[uu][vv]!=1 && uu>=0 && uu<r && vv >=0 && vv<c ) {

                    vis[uu][vv]=1;
                    dist[uu][vv]=dist[u.first][u.second]+1;
                    q.push(pii(uu,vv));
                }
            }
        }

      /*  for (int i=0;i<r;i++) {

            for (int j=0; j<c; j++ ) {

                cout << i << " " << j << " = " <<  dist[i][j] <<endl;
            }

        }*/

        cout << dist[dx][dy] << endl;



    }

    return 0;
}
