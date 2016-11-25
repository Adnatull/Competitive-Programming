    #include<cstdio>

    using namespace std;

    int main()
    {
        int n;

        scanf("%d",&n);

        long long  a,b,sum;


        for(int i=1;i<=n;i++){

            scanf("%lld %lld",&a,&b);


            sum=(a*b)/2;

            printf("Case %d: %lld\n",i,sum);


        }


        return 0;
    }
