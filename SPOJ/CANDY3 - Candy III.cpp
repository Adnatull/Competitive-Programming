#include<bits/stdc++.h>

using namespace std;

int main() {

   // freopen ("in.txt", "r", stdin );

    unsigned long long  t;

    cin >> t;

    for (unsigned long long   i=1;i<=t;i++) {

        unsigned long long  a;
        cin >> a;

        unsigned long long b[a];

        unsigned long long sum=0;

        for (unsigned long long j=0;j<a;j++) {

            cin >> b[j];

            sum+=b[j];

            sum=sum%a;

        }
        if(sum==0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;


    }

    return 0;
}
