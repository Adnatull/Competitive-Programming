#include <bits/stdc++.h>

using namespace std;

int main() {
    //freopen ( "in.txt", "r", stdin );
    int n;
    scanf ( "%d", &n );
    int a[n + 1][n + 1];
    memset ( a, 0, sizeof a );

    for ( int i = 1; i <= n; i++ )
        for ( int j = 1; j <= n; j++ )
            scanf ( "%d", &a[i][j] );

    int sum[n + 1][n + 1];
    memset ( sum, 0, sizeof sum );

    for ( int i = 1; i <= n; i++ ) {
        for ( int j = 1; j <= n; j++ ) {
            sum[i][j] = a[i][j] - sum[i - 1][j - 1] + sum[i - 1][j] + sum[i][j - 1];
        }
    }

    int ans = -1000000;

    for ( int i = 1; i <= n; i++ ) {
        for ( int j = 1; j <= n; j++ ) {
            for ( int k = 1; k < i; k++ ) {
                for ( int l = 1; l < j; l++ ) {
                    ans = max ( ans, sum[i][j] - sum[k - 1][j] - sum[i][l - 1] + sum[k - 1][l - 1] );
                }
            }
        }
    }

    printf ( "%d\n", ans );
    return 0;
}
