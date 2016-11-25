#include<bits/stdc++.h>

using namespace std;

int u,v;
long sum,node;


void dfs (int s, int value[], vector<int> ball[]) {

     for (int j=0;j<u;j=node){
            if(ball[j].empty())
                break;

            long mac=0;
            for (int k=0;k<ball[j].size();k++) {
                if(mac<value[ball[j][k]]){
                    mac = value[ball[j][k]];
                    node = ball[j][k];
                }
            }
            sum+=mac;

       }

       cout << sum << " " << node << endl;

    return ;

}


int main() {

   // freopen ("in.txt","r",stdin);

    int t;
    cin >> t;

    for (int i=1;i<=t;i++) {


        int value[105];




        cout << "Case " << i << ": ";

        cin >> u >> v;
        vector < int > ball[105];
        for (int j=0;j<u;j++)
            cin >> value[j];

        int x, y;



        for (int j=0;j<v;j++){
            cin >> x >> y;
            ball[x].push_back(y);
        }
/*
        for (int j=0;j<u;j++){
                cout << j << " ";
            for (int k=0;k<ball[j].size();k++) {
                cout << ball[j][k] << " ";
            }
            cout << endl;
        }
*/
        sum =0;
        sum+=value[0];
        node = 0;

        dfs(node, value, ball);
      /* for (int j=0;j<u;j=node){
            if(ball[j].empty())
                break;

            long mac=0;
            for (int k=0;k<ball[j].size();k++) {
                if(mac<value[ball[j][k]]){
                    mac = value[ball[j][k]];
                    node = ball[j][k];
                }
            }
            sum+=mac;

       }

       cout << sum << " " << node << endl;*/



    }


    return 0;
}
