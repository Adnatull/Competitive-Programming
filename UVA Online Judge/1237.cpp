#include<cstdio>
#include<cstring>
#include<iostream>
#include<cctype>

#define LL long long
#define L long

using namespace std;

int main(){

	//freopen ( "in.txt", "r", stdin );

	int t;

	//cin >> t;
	scanf ("%d",&t);


	for ( int i=1; i<=t; i++ ){

		if ( i>1 )
			printf("\n");
			//cout << endl;


		int n;

		//cin >> n;
		scanf ("%d%*c",&n);
		//cin.ignore();

		char s[n][25];

		L low[n], high[n];

		for ( int j=0; j<n; j++ ) {

			scanf("%s %ld %ld",s[j],&low[j],&high[j]);

			//cin >> s[j] >> low[j] >> high[j];
		}

		int m;

		//cin >> m;

		scanf ( "%d", &m );


		L x;

		for ( int j=1; j<=m; j++ ) {

			scanf ("%ld" , &x);
			//cin >> x;

			int c=0, in=0;

			for ( int k=0; k<n; k++ ){

				if ( x>=low[k] && x<=high[k] ){
					c++, in = k;
				}
			}

			if ( c==1 )
				printf ( "%s\n", s[in]);
			else
				printf ( "UNDETERMINED\n" );

		}


	}

	return 0;
}
