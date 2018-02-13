#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

bool mark[12345678];
int prime[1234567], c;

void sieve() {

	prime[c++]=2;

	int n = sqrt(12345678);

	for (int i=3; i<=n; i+=2) if(!mark[i]) for ( int j=i*i; j<12345678; j+=i*2 ) if(!mark[j]) mark[j]=true;

	for (int i=3; i<12345678; i+=2) if(!mark[i]) prime[c++]=i;
}


int par[1234567];

int fin (int r) {

	if(par[r]==r) return r;
	return par[r]=fin(par[r]);
}


void unio(int a, int b) {

	int x= fin(par[a]);
	int y = fin(par[b]);

	if(x!=y)
		par[x]=y;
}

void khela(int x) {

	int t = x;

	for (int i=0; i<c &&  prime[i]*prime[i]<=x; i++) {
		if(x%prime[i]==0) {
			while (t%prime[i]==0)
				t /= prime[i];
			unio(prime[i], x);

		}
	}
	if(t>1) unio(t,x);



}

int main() {

	//freopen ("in.txt", "r", stdin);
		sieve();
	int test;
	scanf ("%d", &test);

	for (int cases = 1; cases <= test; cases++) {
		for (int i=0; i<1234567; i++) par[i] = i;
		int n; scanf ("%d", &n);
		int one = 0;

		int a[n]; for (int j=0; j<n; j++) {
			scanf ("%d", &a[j]);

			if(a[j]==1) one++;
			else khela(a[j]);

		}




		int cnt = 0;
		memset(mark, 0, sizeof mark);

		for (int j=0; j<n; j++) 	{
			int p = fin(par[a[j]]);
			if(a[j]>1 && !mark[p]) {
				cnt++;
				mark[p]= true;
			}
		}

		/*for (int i=0; i<n; i++)
			cout << par[a[i]] << " "; cout << endl;*/

		printf ("Case %d: %d\n",cases, cnt+one);

	}





	return 0;
}
