//https://uva.onlinejudge.org/external/101/10107.pdf
//Runtime:  0.720s
//Code Begins
#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

int main(){

    vector< int > v;


    int x,c=0;
    while(cin >> x){
        v.push_back(x);
        sort(v.begin(),v.end());
        if(c%2==0){
            int mid=(0+c)/2;
            cout << v[mid] << endl;
        }
        else{
            int mid=(0+c)/2;
            int min=mid+1;
            int val=(v[mid]+v[min])/2;
            cout << val << endl;
        }
        c++;

    }


    return 0;
}
//Code Ends
