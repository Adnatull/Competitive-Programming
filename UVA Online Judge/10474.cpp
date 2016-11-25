#include<cstdio>
#include<iostream>
#include<algorithm>
#include<climits>

#define LL long long
#define L long

using namespace std;

int main(){

    //freopen ( "in.txt", "r", stdin );

    int n,q;

    int t=1;

    while ( scanf ( "%d %d",&n,&q ) == 2 ) {

        if ( n == 0 && q==0 )
            break;

        int a[n+1];
        a[0]=0;

        for ( int i=1; i<=n; i++ )
            scanf ( "%d", &a[i] );

        sort ( a, a+(n+1) );

        int x;

        printf ("CASE# %d:\n",t);
        t++;

        for ( int i=1; i<=q; i++ ){

            scanf ( "%d", &x );

            int left = 1, right = n, mid;

            int found = INT_MAX;

            while ( left <= right ) {

                mid = (left+right)/2;

                if ( a[mid] == x ) {

                    found = min ( mid, found );

                    right = mid - 1;
                }
                else if ( a[mid] > x )
                    right = mid - 1;
                else
                    left = mid + 1;

            }

            if ( found != INT_MAX )
                printf ( "%d found at %d\n",x,found );
            else
                printf ( "%d not found\n",x);



        }


    }

    return 0;
}
