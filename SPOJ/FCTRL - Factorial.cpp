#include <bits/stdc++.h>

typedef long long LL;

using namespace std;

int main() { 
	
	LL a;
	int t;
	cin >> t;
	
	while (t--) { 
		
		cin >> a;
		LL sum = 0;
		LL x=0;
		for (LL i=1,j=5;x<=a;  i++) {
			x = pow(j,i);
			sum += a/x;
			//cout << a << " " << i << endl;
						
		 }
		cout << sum << endl;
	}
	return 0;
}
