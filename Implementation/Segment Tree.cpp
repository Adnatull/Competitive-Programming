#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>


using namespace std;

class segmentTree {

    private:
    int n;
    vector < int > A, Tree;

    void buildTree(int p, int left, int right) {

        if(left==right){
            Tree[p] = A[left];
        }
        else {
            int mid = (left+right)/2;
            buildTree(p<<1,left, mid);
            buildTree((p<<1)+1,mid+1, right);
            Tree[p] = Tree[p<<1]+Tree[(p<<1)+1];
        }
    }

    int fquery(int p, int left, int right, int x, int y) {

        if(x>right || y<left) return -1;

        if(left>=x && right<=y) return Tree[p];

        int mid = (left+right)/2;
        int p1 = fquery(p<<1, left, mid, x, y);
        int p2 = fquery((p<<1)+1, mid+1, right, x, y);
        if(p1==-1) return p2;
        if(p2==-1) return p1;

        return p1+p2;

    }

    void updateTree(int p, int left, int right, int x, int y) {

        if(left==right) {
            A[left] = y;
            Tree[p] = y;
        }
        else {
            int mid = (left+right)/2;
            if(x>=left  && x <= mid)
                updateTree(p<<1, left, mid, x, y);
            else updateTree((p<<1)+1, mid+1, right, x,y );
            Tree[p] = Tree[p<<1] + Tree[(p<<1)+1];
        }

    }

    public:

        segmentTree(vector <int> &_A ) {
            A = _A;
            n = A.size();
            Tree.assign(n*4,0);
            buildTree(1, 0, n-1);
        }
        int query(int left, int right) {
            int z = fquery(1, 0, n-1, left, right);
            return z;
        }
        void update(int x, int y) {
            updateTree(1, 0, n-1, x, y);
        }

};

int main() {

 //   freopen ("STin.txt", "r", stdin);

    /*
    input:
8
1 2 3 4 5 6 7 8
5
1 1 2
1 1 8
2 4 2
1 1 8
1 2 8


    */

    int n;
    cin >> n;
    vector < int > a;
    int x;
    for (int i=1; i<=n; i++) {
        cin >> x;
        a.push_back(x);
    }
    segmentTree ST(a);

    int q,  y ,z;
    cin >> q;
    for (int i=1; i<=q; i++) {
        cin >> x ;
        if(x==1) { // 1 is for query
            cin >> y >> z;
            x = ST.query(y-1,z-1);
            cout << "Sum of range " << y << " & " << z << " = " <<  x << endl;
        }
        else { // 2 is for update value at specific index
            cin >> y >> z;
            ST.update(y-1,z);
        }

    }

    return 0;

}
