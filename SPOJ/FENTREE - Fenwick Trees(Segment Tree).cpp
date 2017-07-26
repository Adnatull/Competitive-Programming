#include <bits/stdc++.h>

using namespace std;

long tree[1234567];


void update(int p, int left, int right, int x, long val) {


    if(left==right) {
        tree[p]+= val;

    }
    else{
        int mid = (left+right)/2;
        if(x>=left && x<=mid) update(p*2, left, mid, x, val);
        else update(p*2+1, mid+1, right, x, val);
        tree[p] = tree[p*2] + tree[p*2+1];
    }
}

long query(int p, int left, int right, int x, int y) {

    if(left>=x && right<=y) return tree[p];
    if(x>right  || y <left) return -1;

    int mid = (left+right)/2;

    long p1 = query(p*2, left, mid, x, y);
    long p2 = query(p*2+1, mid+1, right, x, y);
    if(p1==-1) return p2;
    if(p2==-1) return p1;
    return p1+p2;
}

int main () {

    //freopen ("in.txt", "r", stdin);
    int t;
    cin >> t;
    long a[t];



    for (int i=0; i<t; i++) {
        cin >> a[i];

        update(1,0,t-1,i,a[i]);

    }

    int q;
    char x;
    cin >> q;
    for (int i=1; i<=q; i++) {
        cin >> x;
        if(x=='q') {
            int y,z;
            cin >> y >> z;
            cout << query(1, 0,t-1, y-1, z-1) << endl;;
        }
        else {
            int y;
            long z;
            cin >> y >> z;
            update(1,0, t-1, y-1, z);
        }
    }

    return 0;
}
