#include <bits/stdc++.h>

using namespace std;

int main() { 
	int t;
	scanf ("%d",&t);
	
	int n,p,q;
	for ( int i=1; i<=t; i++ ) { 
		scanf ("%d %d %d",&n,&p,&q);
		printf ("Case %d: ",i);
		int a[n];
		for (int j=0; j<n; j++)
			scanf ("%d",&a[j]);
		sort (a,a+n);
		int c = 0,gm=0;
		for (int j=0; j<n;j++) { 
			if(c<p && gm+a[j]<=q) { 
				c++, gm+= a[j];
			}
			else 
				break;
		}
		printf ("%d\n",c);
	}
	
	return 0;
	}
