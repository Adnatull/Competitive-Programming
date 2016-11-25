#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<climits>

#define LL long long
#define L long

using namespace std;

int a[1010],pos[1010],m,n;


bool check ( int x){

	int c = 0, tot = 0;

	for ( int i=0; i<n; i++){

		if ( a[i]>x)
			return false;
		if((c+a[i])>x)
			c=0;
		if(c==0)
			tot++;
		c+=a[i];
		if( tot>m )
			return false;
	}


		return true;



}


int main(){

	//freopen( "in.txt", "r", stdin );

	int left, right, mid,best;

	int test;
	cin >> test;

	for (int gh=1;gh<=test;gh++){

	 scanf ("%d %d",&n,&m);

		left = 0, right = 0;

		for (int i=0;i<n;i++){
			scanf("%d",&a[i]);
			//cin >> a[i];
			right+=a[i];
		}
		best = right+1;

		while (left<=right){

			mid = left + (right-left)/2;

			if(check(mid)){

				best = mid;
				right = mid -1;
			}
			else
				left = mid +1;

		}
		printf("Case %d: %d\n",gh,best);
		//cout << best << endl;


	}

}
