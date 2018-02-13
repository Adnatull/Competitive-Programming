#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <map>
#include <cstring>

using namespace std;


int prime[1234567],c;
bool mark[12345678];
void sieve() {
	prime[c++]=2;
	int n = sqrt(12345678);
	for (int i=3; i<=n; i+=2) {
		if(!mark[i]) {
			for (int j=i*i; j<12345678; j+=i*2) {
				mark[j]=true;
			}
		}
	}
	for (int i=3; i<12345678; i+=2)
		if(!mark[i]) prime[c++]=i;

}


vector < int > a[1234567];



void dfs(int x) {
    

    mark[x]=true; 
   for (int i=0; i<a[x].size(); i++) { 
   int d= a[x][i];

        if(!mark[d])
			dfs(d);
       
       } 

}

int main() {
	//freopen ("in.txt", "r", stdin);

	sieve();
	int t; cin >> t;
	for (int i=1; i<=t; i++) {

		memset(mark, false, sizeof(mark));
		int n,y; cin >> n;
		int b[n];
        for (int j=0; j<1234567; j++)
            a[j].clear();
     
		int one = 0;
		for (int j=0; j<n; j++){
			cin >> b[j]; 
			y = b[j];
			if(b[j]==1) one++;
			for (int k=0;prime[k]*prime[k]<=b[j]; k++){
				if(b[j]%prime[k]==0) {
					
					while (y%prime[k]==0) {
						y /= prime[k];
					}
					if(y>1){
						a[b[j]].push_back(y);
						a[y].push_back(b[j]);
					}
					a[prime[k]].push_back(b[j]);
					a[b[j]].push_back(prime[k]);
					
				}
			}
		}

		int cnt = 0;
		for (int j=0; j<n; j++) {
			if(!mark[b[j]] && b[j]!=1) {
				dfs(b[j]);
				cnt++;
			}
		}
		
		
	
	
		 printf ("Case %d: %d\n",i,cnt+one);
	
	}



	return 0;
}
