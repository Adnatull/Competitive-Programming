//SPOJ problem link:: http://www.spoj.com/problems/FENTREE/

#include <bits/stdc++.h>

using namespace std;

int t;
long tree[1234567];

int next(int n){
    return n+(n & -n);
}
int prev(int n) {
    return n -(n & -n);
}

void update(int i, long val) {

    while (i<=t){
        tree[i] += val;
        i = next(i);
    }

}

long getsum(int x) {

    long sum = 0;
    while (x>0){
        sum += tree[x];
        x = prev(x);
    }
    return sum;

}

long sum (int a, int b){

    if(a>b) swap(a,b);
    return getsum(b)-getsum(a-1);

}

int main() {

   // freopen ("in.txt", "r", stdin);

    cin >> t;
    long a[t+1];
    for (int i=0; i<t; i++) {
        cin >> a[i];
        update(i+1,a[i]);
    }


    int q;
    cin >> q;
    char x;
    int y;
    for (int i=1; i<=q; i++) {
        cin >> x >> y ;
        if(x=='q'){
            int z;
            cin >>  z;

            cout << sum(y,z) << endl;
        }
        else{
            long z;
            cin >> z;
            update(y,z);

        }
    }
    return 0;

}
