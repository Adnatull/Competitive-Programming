    #include<cstdio>
    #include<iostream>
    #include<cstring>

    using namespace std;


    long long arr[12345];
    long a,b,c,d,e,f;

    long long fib(long long n){
        ;
        if(n==0) return  a;
        if(n==1) return b;
        if(n==2) return c;
        if(n==3) return d;
        if(n==4) return e;
        if(n==5) return f;

        if(arr[n])
            return arr[n];

        return arr[n]=(fib(n-1)+fib(n-2)+fib(n-3)+fib(n-4)+fib(n-5)+fib(n-6))%10000007;

    }

    int main(){

       //freopen ( "in.txt", "r", stdin );

        int t;
        scanf("%d",&t);
        long n,x;

        long ar[100100];
        for(int i=1;i<=t;i++){
            memset(arr,0,sizeof(arr));
            scanf("%ld %ld %ld %ld %ld %ld %ld",&a,&b,&c,&d,&e,&f,&n);
            /*
            ar[0]=a;
            ar[1]=b,
            ar[2]=c;
            ar[3]=d;
            ar[4]=e;
            ar[5]=f;
            if(n>5){
                for(int j=6;j<=n;j++){

                    ar[j]=(ar[j-1]+ar[j-2]+ar[j-3]+ar[j-4]+ar[j-5]+ar[j-6])%10000007;

                }
            }
            x=ar[n];;
            */
            x=fib(n);
            x=x%10000007;

            printf("Case %d: %ld\n",i,x);

        }
        return 0;
    }


