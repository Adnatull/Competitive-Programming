#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
int n,m;
bool comparefn(int x, int y) {
    if(x%m==y%m){
        if(abs(x)%2==1 && abs(y)%2 == 0) {
            return true;
        } else if(abs(x)%2==0 && abs(y)%2 == 1) {
            return false;
        } else if(abs(x)%2==1 && abs(y)%2 == 1) {
            return x > y;
        } else return x < y;
    }
    return x%m < y%m;
}

int main() {


    while(cin >> n >> m) {
        cout << n << " " << m << endl;
        if(n==0 && m==0)
            break;
        long a[n];
        for(int i=0; i<n; i++)
            cin >> a[i];
        sort(a, a+n, comparefn);
        for(int i=0; i<n; i++) {
            cout << a[i] << endl;
        }
    }

    return 0;
}
