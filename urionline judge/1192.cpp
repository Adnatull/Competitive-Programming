#include<cstdio>
#include<cstring>
#include<iostream>

#define input cin
#define print cout
#define String char
#define deci int
#define ferot return
#define len strlen
#define fr for
#define en endl

using namespace std;

deci main(){

    deci a,i;
    input >> a;

    String s[100];

    fr(i=1;i<=a;i++){
        input >> s;
        deci l=len(s);
        if(s[0]==s[2])
            print << (s[0]-'0')*(s[2]-'0') << en;
        else if(isupper(s[1]))
            print << (s[2]-'0')-(s[0]-'0') << en;
        else
            print << (s[2]-'0')+(s[0]-'0') << en;
    }

    ferot 0;
}
