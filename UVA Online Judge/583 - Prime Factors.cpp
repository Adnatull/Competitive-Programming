#include<bits/stdc++.h>

using namespace std;

int main() {

  //  freopen ("in.txt", "r", stdin );

    long long x,y;

    while ( cin >> x ) {

        if( x==0 )
            break;
        y = x;

        vector <long long> a;

        if(x<0){
            a.push_back(-1);
            x*=(-1);
        }

        while (x%2==0){

            a.push_back(2);
            x/=2;
        }
        long long b = sqrt (x);

        for (long long i=3;i<=b;i+=2) {

            while (x%i==0){
                a.push_back(i);
                x/=i;
            }
        }


        if(x>2)
            a.push_back(x);
        printf ("%lld = ",y);
        for (int i=0;i<a.size();i++) {
            if(i>0)
                cout << " x ";
            cout << a[i];
        }
        cout << endl;




    }

    return 0;
}
