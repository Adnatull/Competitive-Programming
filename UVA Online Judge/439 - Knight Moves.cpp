#include <bits/stdc++.h>

using namespace std;

int main() {

 //   freopen ("in.txt", "r", stdin );

    string a,b;

    int ax[] = { 0,-1, 1, 2, 2, 1 , -1, -2, -2};
    int ay[] = { 0,-2, -2, -1, 1, 2, 2, 1, -1};

    while (cin >> a >> b) {


        int sx= a[0]-96, sy = a[1]-48;
        int dx = b[0]-96, dy = b[1]-48;

       // cout << sx << " " << sy << endl;


        bool vis[10][10];

        int distance[10][10];

        memset (vis,0, sizeof(vis));
        memset (distance, 0 , sizeof (distance));

        queue < pair <int, int> > q;

        q.push(pair <int, int> (sx,sy));

        vis[sx][sy]=1;

        while ( !q.empty() ) {

            pair <int, int > u = q.front();
            q.pop();

            for (int i=1;i<=8;i++) {


                int uu = u.first+ax[i];
                int vv = u.second+ay[i];

                if(uu>=1 && uu<=8 && vv>=1 && vv<=8 && vis[uu][vv]==0) {

                    vis[uu][vv]=1;
                    distance[uu][vv]= distance[u.first][u.second]+1;

                    q.push (pair<int,int> (uu,vv));

                }

            }



        }

        cout << "To get from "<<a<<" to "<<b<<" takes "<<distance[dx][dy]<<" knight moves." << endl;
      //  cout << distance [dx][dy] << endl;

    }

    return 0;
}
