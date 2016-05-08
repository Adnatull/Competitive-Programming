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

        int c=0;
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

        i=0;
        int d=-1;
        int p=0;
        while(i>test-1){
            d=a[i];
            p=0;
        for(;i<test;i++){
            if(a[i]!=d){
                break;
                p=1;
                }
                }
            if(p==1)
            c++;
            }
        if(a[test-1]!=a[0])
            c++;
        printf("%d\n",c);

    }

    return 0;
}
