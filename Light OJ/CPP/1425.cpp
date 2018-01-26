    #include<cstdio>
    #include<algorithm>

    using namespace std;

    int main()
    {
        int n,p;
        scanf("%d",&n);

        long int b,e;
        for(int i=1;i<=n;i++){

            scanf("%ld",&b);

            long int a[b];
            long int c[b];


            for(int j=0;j<b;j++)
                scanf("%ld",&a[j]);

            for(int j=0;j<b;j++){

                if(j==0)
                    c[j]=a[j];
                else{

                    c[j]=a[j]-a[j-1];
                }
            }


            e=*max_element(c,c+b);

            //printf("%ld",e);


            p=0;

            for(int j=0;j<b;j++){
                if(e==c[j])
                    p++;
                if(p>1)
                    break;

            }

            if(p>1)
                printf("Case %d: %ld\n",i,e+1);
            else
                printf("Case %d: %ld\n",i,e);

            /*for(int j=0;j<b;j++)
                printf("%ld ",c[j]);*/


        }


        return 0;
    }
