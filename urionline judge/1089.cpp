#include<cstdio>

using namespace std;

int main()
{
    int test,i,j;

    while(scanf("%d",&test)){

        if(test==0)
            break;

        int arr[test];

        for(i=0;i<test;i++)
            scanf("%d",&arr[i]);


        int a[test];
        for(i=0;i<test-1;i++){
            if(arr[i+1]>arr[i])
                a[i]=0;
            if(arr[i+1]<arr[i])
                a[i]=1;
        }

        if(arr[test-1]>arr[0])
            a[test-1]=1;
        else if( arr[test-1]<arr[0])
                a[test-1]=0;

        int c=0,d=0;
        for(i=0;i<test-1;i++){
            if(a[i]!=a[i+1]){
                d=1;
            }
            else
                d=0;
            if(d==1)
                c++;
        }
        if(a[test-1]!=a[0])
            c++;
        printf("%d\n",c);

    }

    return 0;
}
