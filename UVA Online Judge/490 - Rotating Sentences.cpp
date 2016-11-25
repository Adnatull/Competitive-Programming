#include<bits/stdc++.h>

using namespace std;

int main() {

 //   freopen ("in.txt", "r", stdin );
//    freopen ("out.txt", "w", stdout);

    vector < string > s;

    int l=0;

    string a;
    int k=0;
    while (getline (cin,a)) {

        if(l<a.size())
            l=a.size();

        s.push_back(a);
        k++;
    }

    for (int i=0;i<s.size();i++){

        if(s[i].size()<l){
            int p = l-s[i].size();
            for (int m=0;m<p;m++){
                s[i].insert(s[i].end(),32);
            }
        }

    }

    for (int i=0;i<l;i++) {

        for (int j=k-1;j>=0;j--) {
           // if(i+1>s[j].size())
           //     printf(" ");
          //  else
                printf("%c",s[j][i]);

        }

        cout << endl;

    }

    return 0;
}
