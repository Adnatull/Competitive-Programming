#include <bits/stdc++.h>

using namespace std;

int a[123456],b[123456],n,m;


int boomboom (int sum, int ind, int cnt) { 
	
	if (cnt==m) return sum;
	
	
	sum += a[ind];
	
	return boomboom(sum, a[ind], cnt+1);
	
}


int main() { 
	
	//freopen ("in.txt", "r", stdin);
	

	scanf ("%d %d", &n, &m);
	

	for (int i=1; i<=n; i++) scanf ("%d", &a[i]);

	for (int i=1; i<=n; i++) {
		if(i==a[i]) b[i] = a[i]*m;
		else 
		 b[i] = boomboom(0, i,0); }
	
	for (int i=1; i<=n; i++) printf ("%d ", b[i]);
	
	return 0;
}
