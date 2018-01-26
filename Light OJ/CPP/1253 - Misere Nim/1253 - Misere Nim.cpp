#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    for (int i=1; i<=t; i++) {

        printf ("Case %d: ",i);
        int n;
        cin >> n;
        int a[n];
        cin >> a[0];
        int jor = a[0];
        int one = 0;
        if(jor==1)
            one = 1;
        for (int i=1; i<n;i++){
            cin >> a[i];
            if(a[i]==1)
                one++;
            jor = jor ^ a[i];
        }
        if(one==n) {
            if(1 & n)
                cout << "Bob" << endl;
            else cout << "Alice" << endl;
        }
        else {

            if(jor==0)
                cout << "Bob" << endl;
            else cout << "Alice" << endl;

        }



    }

    return 0;
}
