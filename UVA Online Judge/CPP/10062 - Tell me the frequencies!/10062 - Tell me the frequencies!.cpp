#include <bits/stdc++.h>

using namespace std;

bool compare(const pair<int,int>& a, const pair<int, int>& b){
    if(a.first>b.first){
    //cout << a.first << " " << b.first << endl;

        return false;
    }
    if(a.first==b.first){
        if(a.second<b.second)
            return false;
    }
    return true;

}

int main() {

   //  freopen ("in.txt", "r", stdin);
   // freopen ("out.txt", "w", stdout);
    string s;
    int cot =0;
    while (getline(cin,s)) {
        if(cot>0)
            cout << endl;

        int arr[200];
        memset(arr,0,sizeof arr);

        for (int i=0; i<s.size();i++)
            arr[s[i]]++;

        vector < pair < int , int > > pii;

        for (int i=200-1; i>=0;i--){
            if(arr[i]!=0)
            pii.push_back(make_pair(arr[i],i));
        }
        sort(pii.begin(),pii.end(),compare);
        for (int i=0; i<pii.size(); i++){

            cout << pii[i].second << " " << pii[i].first << endl;

        }

        cot++;
    }

    return 0;
}
