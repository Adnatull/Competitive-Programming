#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<cmath>

#define sc scanf
#define pr printf
#define LL long long
#define L long
using namespace std;

int main(){

    int a;
    sc("%d",&a);

    L Ax,Ay,Bx,By,Cx,Cy,Dx,Dy;

    L ayton;

    for(int i=1;i<=a;i++){
        sc("%ld %ld %ld %ld %ld %ld",&Ax,&Ay,&Bx,&By,&Cx,&Cy);

        Dx=Ax+Cx-Bx;
        Dy=Ay+Cy-By;

        ayton=(Ax*By+Bx*Cy+Cx*Dy+Dx*Ay)-(Ay*Bx+By*Cx+Cy*Dx+Dy*Ax);

        if(ayton<0)
            ayton*=-1;
        ayton*=.5;

        pr("Case %d: %ld %ld %ld\n",i,Dx,Dy,ayton);

    }

    return 0;

