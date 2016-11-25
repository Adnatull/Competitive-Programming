#include<bits/stdc++.h>

using namespace std;

int main() {

  //  freopen("in.txt", "r", stdin);

    int t;
    scanf( "%d", &t);

    for (int i=1;i<=t ;i++ )  {

        int N,E;
        scanf ( "%d %d", &N, &E );
        vector < int > g[110];

        int x,y;

        for (int j=0;j<E;j++) {

            scanf ("%d %d",&x, &y);

            g[x].push_back(y);
            g[y].push_back(x);

        }

        int p , q;
        scanf ("%d %d",&p,&q);

        int pdistance[110] = {0};
        bool pcolor[110] = {0};

        queue < int > pq;

        pq.push(p);
        pcolor[p]=1;

        while (!pq.empty()) {

            int u = pq.front();
            pq.pop();

            if(!g[u].size()==0){
                for (int j=0;j<g[u].size();j++){
                    int v = g[u][j];
                    if (pcolor[v]==0){
                        pcolor[v]=1;
                        pdistance[v]=pdistance[u]+1;
                        pq.push(v);
                    }
                }
            }
        }

        int qdistance [110] = {0};
        int qcolor [110] = {0};

        queue <int> qq;

        qq.push(q);
        qcolor[q]=1;

        while (!qq.empty()) {

            int u = qq.front();

            qq.pop();

            if(!g[u].size()==0){
                for (int j=0;j<g[u].size();j++) {

                    int v = g[u][j];
                    if(qcolor[v]==0) {

                        qcolor[v]=1;
                        qdistance[v] = qdistance[u]+1;
                        qq.push(v);
                    }
                }
            }
        }

        int macx=0;
        for (int j=0;j<110;j++){

            macx=max(macx,pdistance[j]+qdistance[j]);
        }
        printf("Case %d: %d\n",i,macx);



    }




    return 0;
}
