    #include<cstdio>
    #include<iostream>
    #include<vector>
    #include<cmath>
    #include<cstring>
    #include<algorithm>

    #define sc scanf
    #define pr printf
    #define rt return
    #define LL long long
    #define L long

    using namespace std;

    int main()
    {
        int n;
        sc("%d",&n);

        char a[500];
        LL b,c;
        for(int i=1;i<=n;i++){
            sc("%s %lld",a,&b);
            c=0;
            b=abs(b);
            int l=strlen(a);
            if(a[0]=='-'){
            reverse(a,a+l);
            a[l-1]='\0';
            reverse(a,a+(l-1));
                }
            for(int j=0;a[j]!='\0';j++){
                c=c*10+(a[j]-48);
                c=c%b;
             //   cout << c <<" "<<b << endl;
            }
            if(c==0)
                pr("Case %d: divisible\n",i);
            else
                pr("Case %d: not divisible\n",i);


        }

        return 0;
    }
