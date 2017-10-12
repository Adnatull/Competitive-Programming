#include <bits/stdc++.h>

using namespace std;

int main() {

  //  freopen ("in.txt", "r", stdin);

    int a,b,c,d;
    while (cin >> a >> b >> c >> d) {
        if(!a && !b && !c && !d) break;
        int sum  = 1080;

        if(b>=a) sum += ((40-b)+a)*9;
        else sum += (a-b)*9;

        if(b>=c) sum += ((40-b)+c)*9;
        else sum += (c-b)*9;

        if(d>=c) sum += ((40-d)+c)*9;
        else sum += (c-d)*9;
        cout << sum << endl;
    }

    return 0;
}
