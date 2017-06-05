#include <bits/stdc++.h>

using namespace std;

int main() {

   // freopen ("in.txt", "r", stdin);
   // freopen ("out.txt", "w", stdout);

    ios_base::sync_with_stdio(0);cin.tie(0);

    int t;
    cin >> t;

    int n,m;
    for (int cases=1; cases<=t; cases++) {

        cin >> n >> m;

        int done[n+1][m+1];
        memset(done, 0, sizeof done);

        int fer[m+1];
        memset(fer, 0, sizeof fer);

        vector < int > q;

        for (int i=1; i<=n; i++)
            q.push_back(i);

        int tme = 0;
        int total = n*m;
        int cot = 0;
        int aa=0;
        map < int , int > tok;
        for (int i=1; i<=m; i++) {


            aa++;
            if(cot==total)
                break;
            if(fer[i]!=0){



                tok[fer[i]]++;
                if(tok[fer[i]]<m)
                    q.push_back(fer[i]);
                fer[i]=0;
                cot++;
            }

                int x= i;

                for (int j=0; j<q.size(); j++){
                    int y = q[j];
                    if(done[y][x]==0){
                        done[y][x]=1;
                        fer[i]=y;

                        q.erase(q.begin()+j);
                        break;
                    }
                }


            tme +=5;


            if(i==m)
                i=0;
        }
        printf ("Case %d: %d\n",cases,tme);



    }

    return 0;

}
