#include<bits/stdc++.h>

typedef long long LL;

using namespace std;


LL fun ( LL a, LL b) {

    LL term = 1;

    while(true) {

        if(a%2==0)
            a /= 2;
        else
            a = 3*a+1;
        if(a>b)
            break;
        term++;
        if(a==1)
            break;

    }

    return term;

}

int main() {

  //  freopen ("in.txt", "r" ,stdin);

    LL a,b;
    int i=1;
    while (cin >> a >> b) {

        if (a==-1 && b==-1)
            break;

        LL c = fun (a,b);

       // LL d = fun (a,b);

        printf ("Case %d: A = %lld, limit = %lld, number of terms = %lld\n",i,a,b,c);

        i++;
    }


    return 0;
}
