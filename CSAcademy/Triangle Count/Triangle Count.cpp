#include <bits/stdc++.h>

using namespace std;

int main() { 
	
	int n;
	scanf ("%d", &n);
	
	long a[n];
	for (int i=0; i<n; i++) scanf ("%ld",&a[i]);
	sort(a,a+n);
	int cnt = 0;
	for (int i=0; i<n; i++) for (int j=i+1; j<n; j++) for (int k=j+1; k<n; k++)  
		if(a[i]+a[j]>a[k]) cnt++;		
		
	printf ("%d\n", cnt);
	
	return 0;
}
