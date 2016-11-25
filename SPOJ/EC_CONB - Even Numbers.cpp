#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;

    scanf("%d",&t);

    long a;

    for (int i=1;i<=t;i++){

        scanf ("%ld",&a);
        if(a%2!=0)
            printf("%ld\n",a);
        else {

            string s;

            while(a!=0) {

                s.insert(s.end(),a%2+48);
                a/=2;
            }
        //    cout << s << endl;
            reverse(s.begin(),s.end());

            a=0;
            int t;
            for (int j=0;j<s.size();j++) {

                t=(s[j]-48)*pow(2,j);
                a=a+t;

            }
            cout << a << endl;

        }


    }

    return 0;
}
