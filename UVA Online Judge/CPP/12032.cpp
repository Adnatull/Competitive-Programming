#include<iostream>
#include<cstdio>
#include<algorithm>

#define LL long long
#define L long

using namespace std;

L a[123456],n,pos[123456];


bool check ( L x ){

	for ( int i=1; i<=n; i++ ){

		if(pos[i]>x)
			return false;

		if ( pos[i]==x )
			x--;
	}
	return true;



}

int main(){

	//freopen ( "in.txt", "r", stdin );

	int t;

	L left, right, mid, best;

	//cin >> t;

	scanf("%d",&t);

	for ( int i=1; i<=t; i++ ){

		left = 0; 
		right = 0;

		//cin >> n;

		scanf("%ld",&n);


		for ( int j=1; j<=n; j++ ){

			//cin >> a[j];
			scanf("%ld",&a[j]);
			pos[j] = a[j] - a[j-1];
			right+=pos[j];
			//cout << pos[j] << endl;
		}

		best = right+1;



		while ( left<=right ) {

			mid = ( left+right )/2;

			if ( check(mid) ){
				best = min(best,mid);

				right = mid-1;
			}
			else
				left = mid + 1;
		}

		printf ("Case %d: %ld\n",i,best);
		//cout << "Case " << i << ": " << best << endl;


	}

	return 0;
}