#include <bits/stdc++.h>

typedef long long LL;
using namespace std;

LL fact[25];

LL factorial (LL n) {
	if(n==1)
		return fact[n]= 1;
	if(fact[n]!=0)
		return fact[n];
	else
		return fact[n] =  n*factorial(n-1);
}


int main() {
	
	LL x= factorial(20) ;
	fact[0]=1;
	
	int t;
	scanf ("%d",&t);
	
	for (int i=1; i<=t; i++ ) { 
		scanf ("%lld",&x);
		stack < int > n;
		//n.clear(n.begin(),n.end());
		
		for (int j=20; j>=0; j--) {
			
			if(fact[j]<=x) {
				x -= fact[j];
				n.push(j);	
			 }
			
		 }
		 printf ("Case %d: ",i);
		 if(x!=0)
			printf ("impossible\n");
		else {
			
			
			while(n.size()!=1) {
					
					printf ("%d!+",n.top());
					n.pop();
				}
			
			printf ("%d!\n",n.top());
			
		 }
	}	
	
	return 0;
}
