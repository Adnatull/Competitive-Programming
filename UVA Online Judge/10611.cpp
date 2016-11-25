#include<cstdio>

using namespace std;

int main()
{
    int t,i,j;
    scanf("%d",&t);

    long int g[t];

    for(i=0;i<t;i++)
        scanf("%ld",&g[i]);

    int c;
    scanf("%d",&c);

    long int cg[c];

    for(i=0;i<c;i++)
        scanf("%ld",&cg[i]);

    int a,b,index,mid,x,y;
    for(i=0;i<c;i++){
        a=0;
        b=t-1;
        index=cg[i];
        while(a<=b){
            mid=(a+b)/2;
            if(index==g[mid])
                b=mid-1;
            else if(index>g[mid])
                a=mid+1;
            else if(index<g[mid])
                b=mid-1;
        }
        x=b;
        a=0;
        b=t-1;
        index=cg[i];
        while(a<=b){
            mid=(a+b)/2;
            if(index==g[mid])
                a=mid+1;
            else if(index>g[mid])
                a=mid+1;
            else if(index<g[mid])
                b=mid-1;
        }
        y=a;
        if(y>t-1 && y<0)
            printf("X X\n");
        else if(y>t-1)
            printf("%ld X\n",g[x]);
        else if(x<0)
            printf("X %ld\n",g[y]);
        else
            printf("%ld %ld\n",g[x],g[y]);
    }

    return 0;
}
