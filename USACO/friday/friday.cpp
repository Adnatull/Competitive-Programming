/*
ID: adnaan.2
LANG: C++
TASK: friday
*/

#include <iostream>
#include <vector>
#include <map>
#include <cstdio>

using namespace std;

bool isleap(int n) {

    if((n%4==0 && n%100!=0) || n%400 == 0) return true;
    return false;
}


int main() {
    freopen ("friday.in", "r", stdin);
    freopen ("friday.out", "w", stdout);

    int month[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

    string days[] = {"", "sat", "sun", "mon","tues", "wed", "thurs", "fri"};
    map < string , int > cnt;

    int n;
    cin >> n;
    int d = 3;
    for (int i=1900; i<1900+n; i++) {

        for (int j=1; j<=12; j++) {
            int x = month[j];

            if(isleap(i) && j==2) { x = 29;

            }
            for (int k=1; k<=x; k++,d++) {

                if(k==13){

                    cnt[days[d]]++;
                }
              if(d==7) d = 0;
            }
        }
    }
    for (int i=1; i<=7; i++){
            if(i>1) cout << " ";
            cout << cnt[days[i]] ;
    }
    cout << endl;

    return 0;
}
