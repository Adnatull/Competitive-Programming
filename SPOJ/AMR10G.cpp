#include<bits/stdc++.h>

using namespace std;

int main() {

	//freopen("in.txt","r",stdin);

	int t;
	scanf("%d",&t);
	long long x;
	for (int i=1;i<=t;i++) {

		int a,b;
		scanf("%d %d",&a,&b);

		long long c[a];

		for (int j=0;j<a;j++){
			scanf("%lld",&c[j]);
			//cout << c[j] << endl;
		}
		sort(c,c+a);

	//	for (int j=0;j<a;j++)
		//	cout << c[j] << " ";
		//cout << endl;

		int d=a-b+1;

		long long ma=LONG_LONG_MAX;

		for (int k=0;k<d;k++){

			if(abs(c[k]-c[k+b-1])<ma){
				ma=abs(c[k]-c[k+b-1]);
			//	cout << ma << endl;
			}
		}

		printf ("%lld\n",ma);

	}



	return 0;
}