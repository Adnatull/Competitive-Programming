#include <bits/stdc++.h>

using namespace std;


vector < int > lucky;
vector < int > nlucky;
int c;

void pr() {

    c=0;
    for (int i=1; i<1234567; i+=2)
        lucky.push_back(i);

    for (int i=3; ; i++) {
            int l= lucky.size();
            if(i>100000)
                break;
        for (int j=i; j<l; j+=i)
            lucky[j]=0;

        for (int j=0; j<l; j++){
            if (lucky[j]!=0)
                nlucky.push_back(lucky[j]);
        }
        lucky = nlucky;

    }


}

int main() {

    pr();

    int t;
    cin >> t;
    int x;
    for (int i=1; i<=t; i++) {
        cin >> x;
        cout << lucky[x-1] << endl;
    }


    return 0;
}
