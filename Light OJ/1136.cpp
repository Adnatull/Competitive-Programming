    #include<cstdio>
    #include<iostream>
    #include<cmath>
    #include<vector>
    #include<algorithm>
    #include<cstring>
    #include<string>

    #define sc scanf
    #define pr printf
    #define rt return
    #define LL long long
    #define L long

    using namespace std;





    int main(){



        int a;


        sc("%d",&a);

        LL x,y,i,p,o;

        for(i=1;i<=a;i++){

            sc("%lld %lld",&x,&y);

            if(x>y)
                swap(x,y);


            p=(x/3)*2;
            if(x%3!=0)
                p++;
            y++;
            o=(y/3)*2;
            if(y%3!=0)
                o++;

            pr("Case %lld: %lld\n",i,o-p);



        }


        rt 0;
    }
