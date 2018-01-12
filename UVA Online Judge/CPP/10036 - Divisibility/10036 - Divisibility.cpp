#include <bits/stdc++.h>

using namespace std;

int n,k, a[10005];
map <int, map <int, bool> > dp;
int f=0;

void divi (int sum, int position) { 
	
	sum %= k;
	if(position==n) { 
		if(sum==0) { 
			f=1;
			return;
		}
		else return;		
	}
	if(f)
		return;
	if(!dp[sum][position]) {
		dp[sum][position]=true;
		divi (sum-a[position],position+1);
		divi (sum+a[position], position+1);
	}
	return;
}

int main() { 
	
	//freopen ("in.txt","r", stdin);
	//freopen ("out.txt", "w", stdout);
	
	int t;
	scanf ("%d",&t);
	for (int i=1; i<=t; i++) { 
		scanf ("%d %d",&n,&k);
		//memset(dp,0,sizeof(dp));
		dp.clear();
		f=0;
		for (int j=0; j<n; j++)
			scanf ("%d",&a[j]);
		divi(0,0);
		if(f==1) 
			printf ("Divisible\n");
		else
			printf ("Not divisible\n");
	}
	
	
	return 0;
}
