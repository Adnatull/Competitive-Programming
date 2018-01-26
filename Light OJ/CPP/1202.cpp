    #include<cstdio>
    #include<iostream>
    #include<cmath>
    #include<vector>
    #include<algorithm>
    #include<cstring>
    #include<string>
    #include<climits>

    #define sc scanf
    #define pr printf
    #define rt return
    #define LL long long
    #define L long

    using namespace std;

    int main(){

        int n;
        LL a,b,c,d;
        sc("%d",&n);



        for(int i=1;i<=n;i++){
            sc("%lld %lld %lld %lld",&a,&b,&c,&d);

            if((a+d)==(b+c) || (abs(a-c)==abs(b-d)))
                pr("Case %d: 1\n",i);
            else if(a+d==abs(c-b) || (abs(a-d)==b+c) || (a+b)%2==(c+d)%2)
                pr("Case %d: 2\n",i);
            else
                pr("Case %d: impossible\n",i);


            }

        return 0;
    }
