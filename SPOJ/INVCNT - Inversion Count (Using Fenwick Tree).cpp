/*
    Fenwick Tree.
    The solution approach is pretty simple. Fenwick tree calculates total sum from 0 to x & inversions are total small numbers 
    after the  x(index).    But I calculated inversions as total bigger number before the current index.I used vector to store 
    pair  & used pair to store the value    and its index; Then I sorted the vector in descending order. After that I run a loop through the vector. Each time
    (suppose first part of pair is value & second part of pair is index) I used getsum function to find total number of bigger 
    values till that index-1 location & added that to total sum.. Then added 1 to that index using update function.
    
*/

#include <bits/stdc++.h>

using namespace std;

vector < int > lst;
int n;

long long getsum(int x) {

    long long sum = 0;
    while (x>0) {
        sum += (long long) lst[x];
        x -= (x & -x);
    }
    return sum;
}

void update( int x, int y ) {

    while (x<=n) {
        lst[x] += y;
        x += (x & -x);
    }

}

int main() {

    //freopen ("in.txt", "r", stdin);

        int t;
        cin >> t;
        for (int i=1; i<=t; i++) {


            cin >> n;
            int x, y;

            vector < pair <int, int> > val;
            for (int j=1; j<=n; j++) {
                cin >> x;
                val.push_back(make_pair(x,j));
            }
            sort(val.rbegin(), val.rend());

            lst.assign(n+1, 0);

            long long sum = 0;

            for (int j=0; j<n; j++) {
                x = val[j].first;
                y = val[j].second;
                sum += getsum(y-1);
                update(y, 1);
            }

            cout << sum << endl;

            lst.clear();

        }

    return 0;
}
