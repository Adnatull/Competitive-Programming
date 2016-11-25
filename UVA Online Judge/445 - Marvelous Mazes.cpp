#include<bits/stdc++.h>

using namespace std;

int main() {

  //  freopen ("in.txt", "r", stdin);

    int sum=0;
    char c;
    string s;
    while (getline(cin,s)) {

        for (int i=0;i<s.size();i++) {
            c=s[i];
            if(isdigit(c))
                sum+=c-48;
            else if(s=="" || c=='!')
                printf("\n");
            else if(c=='b'){
                for (int i=0;i<sum;i++){
                    printf(" ");
                }
                sum=0;

            }
            else {
                for (int i=0;i<sum;i++){
                    printf("%c",c);
                }
                sum=0;
            }
        }
        printf ("\n");
    }

    return 0;
}
