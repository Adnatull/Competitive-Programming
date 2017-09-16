#include <bits/stdc++.h>

using namespace std;

int main() { 
	
	int n;
	scanf ("%d",&n);
	
	int a[n];
	for (int i=0; i<n; i++) scanf ("%d",&a[i]);
	
	sort(a,a+n);
	int mx = 0;
	
	int  c= 1e5;
	
	if(n==1) cout << c << endl;
	else {	
	for (int i=0; i<n;i++) { 
		if(i==0) { 
			mx = max(mx,a[i+1]-1-1);			
		}
		else if (i==n-1) mx = max(mx,abs(c-a[i-1]-1));
		else mx = max (mx, abs(a[i+1]-1-a[i-1]-1));
	}
	cout << mx+1<< endl;
}
	
	return 0;
}
