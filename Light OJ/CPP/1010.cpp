    #include<iostream>
    #include<stdio.h>
    #include<cmath>

    using namespace std;

    int func(int n);

    int main()
    {
        int test,row,column,value;
        scanf("%d",&test);
        int i=1,n;
        while(test--){
            scanf("%d %d",&row,&column);
            if(row==1)
                printf("Case %d: %d\n",i++,column);
            else if(column==1)
                printf("Case %d: %d\n",i++,row);
            else if(row==2){
                n=func(column);
                printf("Case %d: %d\n",i++,n);
                }
            else if(column==2){
                n=func(row);
                printf("Case %d: %d\n",i++,n);
            }
            else{
                value=ceil(row*column*(.5));
                printf("Case %d: %d\n",i++,value);
            }
        }
        return 0;
    }


    int func(int n){
        int a=2;
        int d=(n/4)*4;
        if(n%4>1)
            d+=4;
        else if(n%4==1)
            d+=2;
        return d;
    }
