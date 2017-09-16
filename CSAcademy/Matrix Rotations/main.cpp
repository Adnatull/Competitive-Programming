#include <bits/stdc++.h>

using namespace std;

int main() { 
	
	int n;
	scanf ("%d", &n);
	
	int a[n][n];
	for (int i=0; i<n; i++) for (int j=0; j<n; j++) scanf ("%d", &a[i][j]);

	
	int b[n][n];
	
	
	for (int i=0; i<n; i++) for (int j=0,k=n-1; j<n; j++,k--) b[i][j] = a[k][i];

	
	int c[n][n];
	for (int i=0,k=n-1; i<n; i++,k--) for (int j=0; j<n; j++) c[i][j] = a[j][k];
	
	
	int d[n][n];
	for (int i=0,k=n-1; i<n; i++,k--) for (int j=0,m=n-1; j<n; j++,m--) d[i][j] = a[k][m];
	
	for (int i=0; i<n; i++) {for (int j=0; j<n; j++) if(a[i][j]||b[i][j]||c[i][j]||d[i][j]) printf ("1 ");
		else printf ("0 ");
	cout << endl;}
	return 0;
}
