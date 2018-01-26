#include<bits/stdc++.h>

using namespace std;

int main() {

 //   freopen ("in.txt", "r", stdin);

    int t;
    scanf ("%d", &t);

    for ( int i=1; i<=t; i++ ) {

        int n;

        scanf ("%d", &n);

        vector < int > fi [20001];

        int x, y;

        for (int j=0;j<n;j++){
            scanf ("%d %d",&x, &y);

            fi[x].push_back(y);
            fi[y].push_back(x);
        }

        int max_red = 0, max_blue = 0, sum=0;




        bool visited[20001]={0};
        bool indicator[20001]={0};

        asif:

        queue <int > g;
        g.push(x);

        int red = 1, blue = 0;

        visited[x]=1;
        indicator[x]=1;

        while (!g.empty()) {

            int u = g.front();
            g.pop();
            if(fi[u].size()!=0){
            for (int j=0;j<fi[u].size();j++){

                int v = fi[u][j];
                if(!visited[v]){

                    visited [v] = 1;
                    if(indicator[u]==1)
                    {
                        indicator[v]=0;
                        blue++;
                    }
                    else {

                        indicator[v]=1;
                        red++;

                    }
                g.push(v);
                }
            }
            }

        }

        int mcx = max(blue,red);
        sum +=mcx;
     //   max_blue = max(blue,max_blue);
      //  max_red = max(red, max_red);


        for (int j =0;j <20001; j++ ){

            if(!fi[j].empty() && visited[j]==0){
                x= j;
                goto asif;
            }


        }

        printf ("Case %d: %d\n",i,sum);

      /*  vector < vector <int > > :: iterator p;
        vector < int > :: iterator q;

        for (p=fi.begin();p!=fi.end();p++){
            for (q=p->begin();q!=p->end();q++){
                cout << *q << " ";
            }
            cout << endl;
        }*/


    }

    return 0;
}
