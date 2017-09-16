#include <bits/stdc++.h>

using namespace std;

int n;

int a[510][510];


int mx = 0;

void findmax(int i, int j, int sum) {
	
	if(i>=n) { mx = max(mx, sum); return; }
	
	if(j==n) j=0;
	
	sum += a[i][j];
	
	findmax(i+1,j+1,sum);
	
	
}

int main() { 
	
	//freopen ("in.txt", "r", stdin);
	
	scanf ("%d", &n);
	
	for (int i=0; i<n; i++) for (int j=0; j<n; j++) scanf ("%d", &a[i][j]);
	
	for (int i=0; i<n; i++) findmax(0,i,0);
	
	printf ("%d\n",mx);
	
	return 0;
}
