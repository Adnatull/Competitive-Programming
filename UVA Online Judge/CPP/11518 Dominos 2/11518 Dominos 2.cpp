#include<bits/stdc++.h>

using namespace std;

vector <int> d[10002];

bool e[10002];


int dfs (int x){

    if(e[x])
        return 0;
    e[x]=1;

    int r = 1;

    for (int i=0;i<d[x].size();i++){
        r+=dfs(d[x][i]);
    }
    return r;

}


int main() {

    int t;
    cin >> t;

    int a, b, c;

    for (int i=1; i<=t; i++) {

        memset(d,0,sizeof(d));
        memset(e,0,sizeof(e));

        cin >> a >> b >> c;

        int x, y;

        for (int j=0;j<b;j++){
            cin >> x >> y;
            d[x].push_back(y);
        }
        int sum = 0;
        for (int j=0;j<c;j++){
            cin >> x;

            sum += dfs(x);
        }

        cout << sum << endl;


    }


    return 0;
}
