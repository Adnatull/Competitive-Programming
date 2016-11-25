#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<climits>

typedef long long LL;
typedef long L;

using namespace std;

int main(){

	//freopen ( "in.txt", "r", stdin );

	int n,k=1;

	while (cin >> n){
		
		if ( n==0 )
			break;

	int a[n];



	for ( int i=0; i<n; i++ )
		cin >> a[i];



	int m;

	 cin >> m ;

		
		printf("Case %d:\n",k);
		k++;

		int b[m];

		

		for ( int i=0; i<m; i++ ){

			scanf ( "%d", &b[i] );

			int mi = INT_MAX, man = 0,best = 0,val=0;

			for ( int j=0; j<n; j++ ){

				for ( int l=0; l<n; l++ ){

					if ( j!=l ){

						best = a[j]+a[l];

						man = abs (best - b[i]);

						if (mi>man){

							mi = man;
							val = best;
						} 

					}
				}

			}

			printf ( "Closest sum to %d is %d.\n",b[i],val);

			//cout << val << endl;


		}

	}


	return 0;


}