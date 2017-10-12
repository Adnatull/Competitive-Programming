
//Fenwick Tree Begins

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

//Fenwick Tree Ends
