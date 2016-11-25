#include<iostream>
#include<cstdio>

#define LL long long
#define L long

using namespace std;

int a,b;

char s[110][110];

void flood_fill ( int x, int y ) {

    if ( x<0 || y<0 || x>=a || y>= b)
        return;

    if ( s[x][y] == '@' ) {

        s[x][y] = '*';

        flood_fill ( x-1, y );
        flood_fill ( x-1, y-1 );
        flood_fill ( x, y-1 );
        flood_fill ( x-1, y+1 );
        flood_fill ( x, y+1 );
        flood_fill ( x+1, y-1 );
        flood_fill ( x+1, y );
        flood_fill ( x+1, y+1 );


    }

    return ;



}


int main() {

   // freopen ( "in.txt", "r", stdin );

    while ( scanf ( "%d %d%*c", &a, &b ) == 2 ) {

        if ( a == 0 && b == 0)
            break;



        for ( int i=0; i<a; i++ )
            scanf ( "%s", s[i]);

        int c=0;

        for ( int i=0; i<a; i++ ) {

            for ( int j=0; s[i][j]!='\0'; j++ ) {

                if ( s[i][j] == '@' ){

                    c++;

                    flood_fill ( i,j );
                    }

            }

        }

        printf ( "%d\n", c );

       // for ( int i=0; i<a; i++ )
       //     printf ( "%s\n",s[i]);


    }

    return 0;
}
