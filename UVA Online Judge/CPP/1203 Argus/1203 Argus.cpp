#include <iostream>
#include <string>
#include <queue>
#include <utility>
#include <map>
#include <vector>

using namespace std;

int main() {

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    map<int, int> period;
    string s;
    int num, p;
    while(cin >> s) {
        if(s == "#")
            break;
        cin >> num >> p;
        q.push(make_pair(p, num));
        period[num] = p;
    }
    int x;
    cin >> x;
    int cnt = 0;
    vector<int> lst;
    while(cnt < x) {
        pair<int, int> zz = q.top();
        int time = zz.first + period[zz.second];
        q.push(make_pair(time, zz.second));
        lst.push_back(zz.second);
        q.pop();
        cnt++;
    }

    for(int i=0; i<lst.size(); i++) {
        cout << lst[i] << endl;
    }
    return 0;
}
