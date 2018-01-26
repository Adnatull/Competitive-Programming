    #include<cstdio>


    using namespace std;

    int main()
    {
        int t;
        scanf("%d",&t);

        int i,j,k,n,q;
        long int x,y;
        for(i=1;i<=t;i++){
            printf("Case %d:\n",i);
            scanf("%d %d",&n,&q);
            long int a[n+1];
            a[0]=0;
            for(j=1;j<=n;j++)
                scanf("%ld",&a[j]);//taking input of points

            long int c,d,index,mid,st,en;
            for(j=1;j<=q;j++){

                scanf("%ld %ld",&x,&y);//taking input of segments

                c=1;
                d=n;
                index=x;
                while(c<=d){
                    mid=(c+d)/2;
                    if(index==a[mid]){
                        c=mid;
                        break;

                    }
                    else if(index>a[mid])
                        c=mid+1;
                    else if(index<a[mid])
                        d=mid-1;
                }
                st=c;

                c=1;
                d=n;
                index=y;
                while(c<=d){
                    mid=(c+d)/2;
                    if(index==a[mid]){
                        d=mid;
                        break;
                        }
                    else if(index>a[mid])
                        c=mid+1;
                    else if(index<a[mid])
                        d=mid-1;
                }
                en=d;
                printf("%ld\n",en-st+1);
            }
        }

        return 0;
    }
