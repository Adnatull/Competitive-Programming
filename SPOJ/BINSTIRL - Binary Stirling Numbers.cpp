#include <bits/stdc++.h>

typedef long long LL;
using namespace std;



int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
       // dp.clear();
        LL m, n;
        cin >> n >> m;

        cout << !((n-m)&((m-1)/2)) << endl;
    }

    return 0;
}
