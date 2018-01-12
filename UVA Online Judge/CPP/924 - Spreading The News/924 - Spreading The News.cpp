#include <bits/stdc++.h>

#define sci(a) scanf("%d", &a)

using namespace std;

int main() { 
	
	
	//freopen ("in.txt", "r", stdin);
	int t;
	sci(t);
	vector < int > graph[t];
	
	int x,y;
	for (int i=0; i<t; i++) { 
		sci(x);
		for (int j=1; j<=x; j++) { 
				sci(y);
				graph[i].push_back(y);
			}	
	}
	int q;
	sci(q);
	for (int i=1; i<=q; i++) { 
		sci(x);
		
		int dis[t];
		memset(dis, -1, sizeof dis);
		queue < int > qq;
		
		qq.push(x);
		dis[x] = 0;
		int mac = 0;
		while (!qq.empty()) { 
			int u = qq.front();
			qq.pop();	
			for (unsigned int j=0; j<graph[u].size(); j++) { 
				int v= graph[u][j];
				if(dis[v]==-1) { 
					dis[v] = dis[u]+1;
					qq.push(v);
					mac = max(mac, dis[v]);
				}
			}
		}
		
		int cnt[mac+1];
		memset(cnt, 0, sizeof cnt);
		
		for (int j=0; j<t; j++) { 
			if(dis[j]!=-1) { 
				cnt[dis[j]]++;
			}
		}

		
		int ind;
		int ma = -1;
		for (int j=1; j<=mac; j++) { 
			if(cnt[j]>ma) { 
				ma = cnt[j];
				ind = j;
			}
		}
		if(ma==-1) printf ("0\n");
		else printf ("%d %d\n",ma,ind);
		//cout << ma << " " << ind << endl;
		
	}
	
	return 0;
}
