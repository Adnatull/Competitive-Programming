#include <bits/stdc++.h>

typedef long long LL;

using namespace std;

int main() {

    LL a, b;
    while (cin >> a >> b) {
        if(a==-1 && b==-1)
            break;


        if(b<3)
            cout << 0 << endl;
        else {
            LL c = a*(a-1)/2;
            LL d = b%2==0 ? (b/2)*(b-2)/2 : (b-1)/2*(b-1)/2;

            LL e = __gcd(c,d);
            if (e==0)
                cout << 0 << endl;
            else
                cout << d/e << "/" << c/e << endl;
        }
    }

    return 0;
}
