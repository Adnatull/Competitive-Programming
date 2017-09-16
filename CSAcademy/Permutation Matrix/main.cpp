#include <bits/stdc++.h>

#define LL long long

using namespace std;

int main() { 
	
	int n,m;
	scanf ("%d %d",&n,&m);
	
	int a[n+1];
	bool vis[n+1];
	for (int i=1; i<=n; i++) scanf ("%d",&a[i]),vis[i]=false;
	LL sum[n+1];
	for (int i=1; i<=n; i++) { 
		if(vis[i]) continue;
		vector < pair<int,int> > perm;
		int x = i;
		LL current_sum = 0; int length = 0;
		while (!vis[x]) { 
				perm.push_back(make_pair(a[x],x));
				length++;
				current_sum+=(LL)a[x];

				vis[x] = true;		
				x  = a[x];	
		}
		LL base_sum =(LL) (m/length) * current_sum;
		x = m%length;
		for (int j=0; j<length; j++) sum[perm[j].second] = base_sum;
		if(x>0) { 
			LL part_sum = 0;
			for (int j=0; j<x; j++) part_sum+= (LL) perm[j].first;
			int z;

			bool alldone[length];
			for (int j=0; j<length; j++) alldone[j] = false;
			int zz;
			for (int j=0,y=x-1; j<length; j++,y++) { 
				if(alldone[j]) break;
				y = y%length;
				if(j==0) z = 0,zz=0;				
				else				
					z = perm[j-1].first,zz=perm[y].first;//7 11 5 3 9 7 
				part_sum+=(LL)zz;
				part_sum -= (LL) z;
				sum[perm[j].second] += part_sum;
				alldone[j] = true;
				if(j==length-1) j = -1;
			}
		}
	}
	/*
	 * 	6 2
2 5 4 1 6 3
	 * */
	for (int i=1; i<=n; i++) printf("%lld ",sum[i]);
	
	
	
	return 0;
}
