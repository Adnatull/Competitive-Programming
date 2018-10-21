#include<cstdio>
#include<cmath>
#include<iostream>
#include<climits>

using namespace std;


int max ( int a, int b ) {
    return ( ( a > b ) ? a : b );
}

int max ( int a, int b, int c ) {
    return max ( max ( a, b ), c );
}


int MaxCrossingArray ( int a[], int b, int m, int c ) {
    int left_sum = INT_MIN;
    int sum = 0;

    for ( int i = m; i >= b; i-- ) {
        sum += a[i];

        if ( sum > left_sum ) {
            left_sum = sum;
        }
    }

    int right_sum = INT_MIN;
    sum = 0;

    for ( int i = m + 1; i <= c; i++ ) {
        sum += a[i];

        if ( sum > right_sum )
            right_sum = sum;
    }

    return ( left_sum + right_sum );
}


int MaxSubArray ( int a[], int c, int d ) {
    if ( c == d )
        return a[c];

    int m = ( c + d ) / 2;
    return max ( MaxSubArray ( a, c, m ), MaxSubArray ( a, m + 1, d ), MaxCrossingArray ( a, c, m, d ) );
}



int main() {
    while ( true ) {
        int a;
        scanf ( "%d", &a );

        if ( a == 0 )
            break;

        int b[100005];

        for ( int j = 0; j < a; j++ )
            cin >> b[j];

        int max = MaxSubArray ( b, 0, a - 1 );

        if ( max > 0 )
            printf ( "The maximum winning streak is %d.\n", max );
        else
            printf ( "Losing streak.\n" );
    }

    return 0;
}
