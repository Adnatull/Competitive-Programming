#include<cstdio>
#include<iostream>


using namespace std;


long int p;

long int cal(long int a){

    p++;
    //printf("%d ",a);

    if(a==1)
        return 1;

    if(a%2!=0)
        return cal(3*a+1);
    else
        return cal(a/2);

}


int main()
{
    long int n,m,i,c,b;

    long int macx;

    while(scanf("%ld %ld",&n,&m)==2){

        b=n;
        c=m;

        if(n>m){
            n=n+m;
            m=n-m;
            n=n-m;
            }

        macx=0;

        for(i=n;i<=m;i++){
            p=0;

            long a=cal(i);

            if(macx<p)
                macx=p;
        }

        printf("%ld %ld %ld\n",b,c,macx);
    }

    return 0;
}
