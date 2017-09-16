#include <bits/stdc++.h>

using namespace std;

int main() { 
	
	int n;
	scanf ("%d", &n);
	int a[n],b[n];
	
	int location  = -1;
	for (int i=0; i<n; i++) scanf ("%d %d", &a[i], &b[i]);
	
	for (int i=0; i<n; i++) {
		bool yes = true;
		for (int j=0; j<n; j++) { 
		    if(i!=j)
			if(a[i]<=a[j] || b[i]<=b[j]) { 
				yes = false;
				break;
			}
		}
		if(yes) { 
			location = i+1;
			break;
		}
		
	}
	printf ("%d\n", location); 
	
	return 0;
}
