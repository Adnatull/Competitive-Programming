#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cctype>
#define LL long long
#define L long

using namespace std;

LL d[234567],m[234567];
L dm[234567],mm[234567];


int main(){

   // freopen("in.txt","r",stdin);



    LL a,b;

    LL p;

    LL sum;
    asif:

    while(cin >> a >> b){

        if(a==0 && b==0)
            break;

        for(L i=0;i<a;i++){
            cin >> d[i];
           // dm[i]=0;
        }


        for(L i=0;i<b;i++){

            cin >> m[i];
           mm[i]=0;

        }
        if(a>b){
            cout << "Loowater is doomed!" << endl;
            goto asif;
        }
        sort(d,d+a);
        sort(m,m+b);

        p=0;

        sum=0;
        for(L i=0;i<a;i++){

            for(L j=0;j<b;j++){

                if(p>=a)
                    break;

                if(d[i]<=m[j] && mm[j]==0){
                    sum+=m[j];
                    p++;
                    mm[j]=1;
                    break;
                    }


            }
            if(p>=a)
                break;
        }

    if(p>=a)
        cout << sum << endl;
    else
        cout << "Loowater is doomed!" << endl;


    }


    return 0;
}
