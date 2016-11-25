#include<iostream>
#include<cstdio>
#include<cstring>

#define LL long long
#define L long

using namespace std;

int a,b;

char s[110][110];

void flood_fill ( int x, int y ) {

    if ( x<0 || y<0 || x>=a || y>= b)
        return;

    if ( s[x][y] == '1' ) {

        s[x][y] = '0';

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

    //freopen ( "in.txt", "r", stdin );

   int t=1;

    while ( scanf ( "%d*c", &a ) == 1 ) {




        for ( int i=0; i<a; i++ ){
            scanf ( "%s", s[i]);
            b=strlen (s[i]);
            }

        int c=0;

        for ( int i=0; i<a; i++ ) {

            for ( int j=0; s[i][j]!='\0'; j++ ) {

                if ( s[i][j] == '1' ){

                    c++;

                    flood_fill ( i,j );
                    }

            }

        }
        printf ( "Image number %d contains %d war eagles.\n",t,c);
        t++;
       // printf ( "%d\n", c );

       // for ( int i=0; i<a; i++ )
       //     printf ( "%s\n",s[i]);


    }

    return 0;
}
