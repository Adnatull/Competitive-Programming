#include <bits/stdc++.h>

typedef long long LL;

using namespace std;

int main() {


    int t;
    cin >> t;

    double x,y,z,a;
    for (int i=1; i<=t; i++) {
        cin >> x;
        printf ("Case %d: ",i);

        y = floor(sqrt(x));
        z = sqrt(x);
        a = ceil (sqrt(x));
        LL b = a;
        LL c,d,e,f;
        if(y==z){
            if(b%2!=0){
                cout << 1 << " " << b << endl;
            }
            else
                cout << b << " " << 1 << endl;
        }
        else {
            c = (LL)y;
            d = b*b;
            c = y*y;
            c = c+1;
            e = y;
            f = x;
            if(b%2!=0){
                if(c+e>=f){
                    cout  << b << " " << (f-c)+1 << endl;
                }
                else
                    cout << d-f+1 << " " << b << endl;
            }
            else {
                if(c+e>=f)
                    cout << f-c+1 <<  " " << b << endl;
                else
                    cout << b << " " << d-f+1 << endl;
            }

        }
    }


}
