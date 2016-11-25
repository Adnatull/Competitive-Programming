
#include<bits/stdc++.h>

using namespace std;

int main() {

    int a,b=3;

    while (cin >> a) {

        if ( a==0 )
            break;

        int c = 0,d,e;

        while (a>=b){

            d = a/b;
            e = a%b;

            c += d;

            a= d+e;
        }
        if(a==2)
            c++;

        cout << c << endl;


    }

    return 0;
}
