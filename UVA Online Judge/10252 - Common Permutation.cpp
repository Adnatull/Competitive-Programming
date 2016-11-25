#include<bits/stdc++.h>

using namespace std;

int main() {

  //  freopen ("in.txt", "r", stdin);
   // freopen ("out.txt", "w", stdout);

    string s,t;

    while (getline(cin,s)) {
        getline(cin,t);
        sort (s.begin(), s.end());
        sort (t.begin(), t.end());

       // cout << s << " " << t << endl;



        string a="";
        int i,j;
        string b="";

        bool mark[t.size()];
        memset (mark,0,sizeof(mark));

        for (i=0;i<s.size();i++) {

            for (j=0;j<t.size();j++) {

                if(s[i]==t[j] && !mark[j]){
                    mark[j]=1;
                  b.insert(b.end(),s[i]);
                    break;
                }
            }
        }

        cout << b << endl;


    }


    return 0;
}
