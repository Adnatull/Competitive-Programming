#include<cstdio>
#include<iostream>
#include<algorithm>


#define LL long long
#define L long

using namespace std;

int n,k,a[610];


bool check ( int x ) {

	int c = 0, tot = 0;

	for ( int i = 0; i < n; i++ ){

		if ( a[i] > x ) return false;

		if ( c+a[i] > x )
			c=0;
		if ( c==0 )
			tot++;
		c+=a[i];

		if (tot > k)
			return false;

	}

	return true;


}

int main(){

	//freopen ( "in.txt", "r", stdin );

	int best, left, right, mid;

	while ( cin >> n >> k){

		n++;
		k++;
		left = 0,right = 0;

		for(int i=0;i<n;i++){

			cin >> a[i];
			right+=a[i];

		}

		best = right + 1;

		while ( left <= right ) {

			mid = ( left + right )/2;

			if ( check (mid) ){

				best = mid;

				right = mid - 1;

			}
			else left = mid + 1;


		}

		cout << best << endl;

	}

	return 0;
}