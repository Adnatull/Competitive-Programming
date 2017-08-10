/*
Algorithm: Segment Tree
*/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>
#include <map>
#include <queue>
#include <stack>
#include <functional>
#include <iomanip>
#include <utility>
#include <cmath>

#define sci(a) scanf("%d", &a)
#define scii(a,b) scanf("%d %d", &a, &b)
#define LL long long
#define L long
#define mod 1e9+7
#define pb push_back
#define mp make_pair

using namespace std;

vector < int > tree;

void update(int p, int left, int right, int x, int val) {

    if(left==right) {
        tree[p] += val;
        return;
    }
    else {

        int mid = (left+right)/2;
        if( x<=mid) update(p*2, left, mid, x, val);
        else update(p*2+1, mid+1, right, x, val);
        tree[p] = tree[p*2] + tree[p*2+1];
    }
}

void upclear(int p, int left, int right, int x) {
    if(left==right){
       printf ("%d\n", tree[p]);
        tree[p] = 0;
        return;
    }
    else {
        int mid = (left+right)/2;
        if(x>=left && x<=mid) upclear(p<<1, left, mid, x);
        else upclear((p<<1)+1, mid+1, right, x);
        tree[p] = tree[p<<1] + tree[(p<<1)+1];
    }
    return;

}

int query(int p, int left, int right, int x, int y) {

    if(x>right || y<left) return -1;
    if(left>=x && right<=y) return tree[p];

    int mid = (left+right)/2;

    int p1 = query(p<<1, left, mid, x, y);
    int p2 = query((p<<1)+1, mid+1, right, x, y);
    if(p1==-1) return p2;
    if(p2==-1) return p1;
    return p1+p2;
}

int main() {

  //  freopen ("in.txt", "r",stdin);
   // ios_base::sync_with_stdio(0);//cin.tie(0);

    int t;
    sci(t);
    int n,q;
    for (int i=1; i<=t; i++) {
        scii(n,q);
        //cin >> n >> q;
        printf ("Case %d:\n",i);
        //cout << "Case " << i << ":" << endl;
        tree.assign(n*4,0);
        int x;
        for (int j=1; j<=n; j++) {
            sci(x);
            update(1, 0, n-1, j-1, x);
        }
        int y,z;
        for (int j=1; j<=q; j++) {
            sci(x);
            if(x==1){
                sci(y);
                upclear(1, 0, n-1, y);
            }
            else if(x==2){
               scii(y,z);
                update(1, 0, n-1, y, z);
            }
            else if(x==3){
                   scii(y,z);
                printf ("%d\n",query(1, 0, n-1, y , z ));
               // cout << query(1, 0, n-1, y , z ) << endl;
            }

        }

        tree.clear();
    }



    return 0;
}
