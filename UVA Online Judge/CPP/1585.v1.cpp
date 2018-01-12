#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>

#define LL long long
#define L long

using namespace std;

int main(){

    freopen( "in.txt" , "r" , stdin );

    int n;

    char s[100],d[100],c;

    L sum;

    cin >> n;
    cin.ignore();
    for(int i=0;i<n;i++){
        //cin.ignore();
        scanf("%s",s);
        int p=0;
        sum=0;
        for(int j=0;s[j]!='\0';j++){
            if(s[j]=='X' || s[j]=='x')
                p=0;
            else
                p++;

            sum+=p;
        }

        cout << sum << endl;
    }



    return 0;
}
