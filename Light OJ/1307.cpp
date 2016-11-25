    #include<cstdio>
    #include<cstring>
    #include<iostream>
    #include<cmath>
    #include<algorithm>

    #define sc scanf
    #define pr printf
    #define LL long long
    #define L long
    #define elif else if

    using namespace std;

    int main(){

        int t;
        sc("%d",&t);

        for(int i=1;i<=t;i++){
            LL n;
            sc("%lld",&n);
            LL ar[n];

            for(int j=0;j<n;j++)
                sc("%lld",&ar[j]);

            sort(ar,ar+n);

            LL key=0;
            int cot=0;
            int st=0,en=0,mid=0;
            int pst=0,pen=0;
            for(int j=0;j<n;j++){
                    while(ar[j]==1)
                        j++;

                for(int k=j+1;k<n;k++){

                    key=ar[j]+ar[k]-1;
                    st=k+1;
                    en=n-1;
                    while(st<=en){
                        mid=(st+en)/2;
                        if(ar[mid]<=key)
                            st=mid+1;
                        elif(ar[mid]>key)
                            en=mid-1;
                    }
                    cot+=(st-k-1);

                }
            }
            pr("Case %d: %d\n",i,cot);



        }

        return 0;
    }
