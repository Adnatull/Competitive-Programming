#include<bits/stdc++.h>

using namespace std;

int main() {

    int a,b;

    while (cin >> a >> b) {

        int c = a;

        while (a>=b){

            int d = a/b;
            int e = a%b;

            c += d;

            a= d+e;
        }

        cout << c << endl;


    }

    return 0;
}
