#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {

    string s;
    while (cin >> s) {

    if(s.size()==1 && s[0]=='1')
        cout << 1 << endl;
    else {

        int l = s.size();

        reverse(s.begin(),s.end());

        int carry = 1;




            for (int i=0; i<l; i++) {

                int a = s[i]-48;

                if(a>=carry){
                    a -= carry;
                    s[i]=a+48;
                    carry = 0;
                    break;
                }
                else {
                    a = a+10;
                    s[i] = a-carry+48;

                    carry = a/10;
                }

            }
            reverse(s.begin(),s.end());
        while(s[0]=='0'){
            s.erase(s.begin());
        }
        if(s.size()==0)
            s="0";
      //  cout << s << endl;
        reverse(s.begin(),s.end());
        l = s.size();
        carry = 0;
        int a;
        for (int i=0; i<l; i++) {

            a = s[i]-48;
            a *=2;
            a += carry;

            s[i]=a%10+48;
            carry = a/10;

        }
        while (carry>0){

            a = carry;
            s.insert(s.end(),a%10+48);
            carry = a/10;
        }
        reverse(s.begin(),s.end());

        cout << s << endl;
    }
    }


    return 0;
}
