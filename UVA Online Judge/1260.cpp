#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>

#define LL long long
#define L long

using namespace std;

int main(){

	//freopen ( "in.txt", "r", stdin );

	int t;
	scanf ( "%d",&t );

	for ( int i=1; i<=t; i++ ){

		int n;

		scanf ( "%d", &n );

		int a[n],b[n];

		memset ( b, 0, n );

		for ( int j=0; j<n; j++ ) 
			scanf ( "%d", &a[j]);
		int co,sum=0;
		for ( int j=1; j<n; j++ ){
			co = 0;

			for ( int k=0; k<j; k++ ){
				if ( a[j]>= a[k] )
					co++;
			}
			sum+=co;
		}

		printf ("%d\n",sum);

	}

	return 0;
}