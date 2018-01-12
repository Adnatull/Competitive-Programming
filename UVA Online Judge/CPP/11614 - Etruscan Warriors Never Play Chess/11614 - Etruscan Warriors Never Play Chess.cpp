#include<cstdio>
#include<iostream>
#include<cmath>

using namespace std;

int main() {

	//freopen ( "in.txt", "r", stdin );

	long long  n;

	cin >> n;

	long long a;
	long long i,j,b;
	for ( i=1;i<=n;i++){

		cin >> a;

		if(a==0)
			cout << "0" << endl;
		else {
			
			j=(-1+sqrt(1+8*a))/2;

			

			cout << j << endl;
			}
	

			
			}
		

	

	return 0;
}