#include<iostream>
#include<cstdio>
#include<cmath>


using namespace std;

int fun1(int n);


int main()
{

   // freopen ( "in.txt", "r", stdin );

    int arr[110],i,j,k=0,x=1,c;
    arr[0]=0;
    for(i=2;i<=10000;i++){
        c=sqrt(i);
        k=0;
        for(j=2;j<=c;j++){
            if(i%j==0){
                k=1;
                break;
            }
        }
        if(k==0){
            arr[x]=i;
            if(x==109)
                break;
            x++;

            }
    }

    int n;
    while(1){
    scanf("%d",&n);
    if(n==0)
        break;
    int w=n+1;
    long int r[w];
    for(i=0;i<w;i++)
        r[i]=0;
    int y=1,q=0,io;
    for(i=2;i<=n;i++){
            io=i;
        for(j=1;j<=i;j++){
            q=0;
            while(io%arr[j]==0){
                io=io/arr[j];
                q++;
                }
                r[j]+=q;
        }
    }
    int d=fun1(n);
    for(i=0;i<3-d;i++){
        printf(" ");
    }
    printf("%d! =",n);
    int xd=0;
    for(i=1,k=0;arr[i]<=n;i++,k++){
        if(xd==1){
            printf("\n");
            printf("      ");
            xd=0;
        }
        d=fun1(r[i]);

        for(j=0;j<3-d;j++)
            printf(" ");
        //if(k>0)
           // printf(" ");
        printf("%ld",r[i]);
        if(i%15==0){
            //d=fun1(r[i]);
            xd=1;
            
            }
      /*  if(i%15==0){
            k=0;
            printf("\n      ");
            d=fun1(r[i]);
            for(j=0;j<3-d;j++)
            printf(" ");
        }*/
    }
    printf("\n");
    }
    return 0;
}

int fun1(int n){
    int d=0;
    while(n>0){
        n=n/10;
        d++;
    }
    return d;
}