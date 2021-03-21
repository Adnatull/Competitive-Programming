#include <bits/stdc++.h>

using namespace std;

int main() {

    int m,n;
    while(cin >> m >> n) {
        if(m == 1 && n == 1) break;

        int leftTop = 0;
        int leftBottom = 1;
        int rightTop = 1;
        int rightBottom = 0;
        int midTop = 1, midBottom = 1;
        string dir = "";
        while(m != midTop || n != midBottom) {
            if(midTop*n < m*midBottom) {
                dir += "R";
                leftTop = midTop;
                leftBottom = midBottom;
            } else {
                dir += "L";
                rightTop = midTop;
                rightBottom = midBottom;
            }
            midTop = leftTop+rightTop;
            midBottom = leftBottom+rightBottom;
        }
        cout << dir << endl;
    }
    return 0;
}
