#include <bits/stdc++.h>


typedef long long LL;

using namespace std;

int main() {



    int t;
    scanf ("%d",&t);
    for (int i=1; i<=t; i++) {

        int a;
        string s;
        cin >> a ;
        a = a%3;
        cin.ignore();
        cin >>  s;
        printf ("Case %d: ",i);
        if(s=="Alice") {
            if(a==0 || a==2)
                cout << "Alice" << endl;
            else cout << "Bob" << endl;
        }
        else {
            if(a==1 || a==2)
                cout << "Bob" << endl;
            else
                cout << "Alice" << endl;
        }

    }

    return 0;
}
