#include <bits/stdc++.h>

using namespace std;


/*
 * 
1 2 3 4 5 6 

1 3 5 2 4 6 
1 6 3 4 5 2 
2 5 4 3 6 1 

2 4 6 5 3 1 
2 1 4 3 6 5 
5 6 3 4 1 2 

5 3 1 6 4 2 
5 2 3 4 1 6 
6 1 4 3 2 5 

6 4 2 1 3 5 
6 5 4 3 2 1 
1 2 3 4 5 6 
 * */


int a[123456],b[123456];
int n;



int main() { 
	
	//freopen ("in.txt", "r", stdin);
	scanf ("%d", &n);
	
	for (int i=0; i<=n; i++) a[i] = i;
	
	int k;
	scanf ("%d", &k);
	
	k -= (k/4)*4;
		
	for (int xx=1; xx<=k; xx++) { 
		int j = 1;
		for (int i=1; i<=n; i+=2) b[j++] = a[i];
		for (int i=2; i<=n; i+=2) b[j++] = a[i];
		
		int left = 1, right = n;
		j = 1;
		while (left<right) { 
		a[j++] = b[left];
		a[j++] = b[right];
		left++, right--;
		}
		j = n;
		for (int i=1; i<=n; i++) b[i] = a[j--];
		for (int i=1; i<=n; i++) a[i] = b[i];
		
	}
	
	
	for (int i=1; i<=n; i++) printf ("%d ", a[i]);
	
	return 0;
}
