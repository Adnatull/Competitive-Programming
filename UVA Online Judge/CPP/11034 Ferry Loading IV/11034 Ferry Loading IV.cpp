#include <iostream>
#include <queue>
#include <string>
#include <utility>
using namespace std;

int main() {
    int test;
    cin >> test;
    for(int i=1; i<= test; i++) {
        int lengthOfFerry, n;
        cin >> lengthOfFerry >> n;
        lengthOfFerry *= 100;
        queue<int> left;
        queue<int> right;
        int x;
        string s;
        for(int j=0; j<n; j++) {
            cin >> x >> s;
            if(s == "left")
                left.push(x);
            else right.push(x);
        }
        int pos = 0;
        int cnt = 0;
        while(!left.empty() || !right.empty()) {
            if(pos == 0) {
                int sum = 0;
                while(!left.empty() && sum<lengthOfFerry){
                    int x = left.front();
                    sum += x;
                    if(sum <= lengthOfFerry) {
                        left.pop();
                    } else {
                        sum -= x;
                        break;
                    }
                }
                pos = 1;
            } else {
                int sum = 0;
                while(!right.empty() && sum < lengthOfFerry) {
                    int x = right.front();
                    sum += x;
                    if(sum <= lengthOfFerry) {
                        right.pop();
                    } else {
                        sum -= x;
                        break;
                    }
                }
                pos = 0;
            }
            cnt++;
        }
        cout << cnt << endl;

    }

    return 0;
}
