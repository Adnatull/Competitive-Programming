#include<bits/stdc++.h>

using namespace std;

int gcd (int x, int y) {

    if(y==0)
        return x;

    return gcd (y, x%y);

}

int main() {

   // freopen ("in.txt", "r", stdin);

    int t;
    cin >> t;
    cin.ignore();

    string s;
    for (int i=1;i<=t;i++) {

        getline (cin,s);

        vector <int > a;

        int x;
        stringstream ch(s);

        while (ch >> x) {

            a.push_back(x);
        }

        int gc = 0;

        for (int j=0;j<a.size();j++) {

            for (int k=0;k<a.size();k++) {

                if(j!=k){
                int p =gcd (a[j],a[k]);

                if(p>gc)
                    gc = p;
                }
            }

        }
        cout << gc << endl;
    }

    return 0;
}
