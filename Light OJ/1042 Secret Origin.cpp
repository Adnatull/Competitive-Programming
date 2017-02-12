#include <bits/stdc++.h>

#define LL long long
#define ULL unsigned long long 

using namespace std;

int main() { 
	int n;
	scanf ("%d",&n);
	
	LL a,b;
	for (int i=1; i<=n; i++ ) { 
		scanf ("%lld",&a);
		vector < LL > bi;
		printf ("Case %d: ",i);
		while (a!=0) {
			bi.push_back(a%2);
			a /= 2;			
		}
		bi.push_back(0);
		reverse(bi.begin(),bi.end());
		
		next_permutation(bi.begin(),bi.end());
		reverse(bi.begin(),bi.end());
		int l = bi.size();
		b=0;
		for (int j=0; j<l; j++) {
			b += pow(2,j)*bi[j];
			
		
			
			}
		cout << b << endl;
	
	}
	return 0;
}
