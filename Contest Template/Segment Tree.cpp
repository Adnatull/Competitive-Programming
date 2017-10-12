//Segment Tree Begins

int A[1234567];
int Tree[12345678];

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

//Segment Tree ends
