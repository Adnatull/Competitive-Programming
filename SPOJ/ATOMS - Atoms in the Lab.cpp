#include <bits/stdc++.h>
typedef unsigned long long LL;
using namespace std;

int main() {

    ios_base::sync_with_stdio(0);cin.tie(0);

    LL n, k ,m;
     int t ;
    cin >> t;
    for (int o=1; o<=t; o++) {
    cin >> n >> k >> m;


        int i=0;
        LL atom = n;

        while (atom<=m/k){
            atom = atom*k;
            i++;
        }
        cout << i << endl;
    }

    return 0;
}
