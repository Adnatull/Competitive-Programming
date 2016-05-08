#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    unsigned long long int a,b,c;
    while(scanf("%lld %lld",&a,&b)!=EOF){
        c=a^b;
        printf("%lld\n",c);
    }
    return 0;
}
