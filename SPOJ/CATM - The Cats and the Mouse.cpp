#include <bits/stdc++.h>

#define pii pair <int, int >
typedef long long LL;

using namespace std;

int main() { 
	
	//freopen ("in.txt", "r", stdin);
	
	int a,b;
	cin >> a >> b;
	
	map < int , map < int , int>  > m; 
	map < int , map < int , int>  > c1;
	map < int , map < int , int>  > c2;
	
	int q;
	cin >> q;
	int w,x,y,z;
	for (int i=1; i<=q; i++) { 
		cin >> w >> x >> y >> z;
		
		map < int, map <int, bool> > check;
		
		queue < pii > qu;
		
		qu.push(pii(y,z));
		c1[y][z] = 0;
		check[y][z] = true;
		
		while (!qu.empty()) { 
			int s = qu.front().first;
			int t = qu.front().second;
			
			qu.pop();
			
			int u,v;
			u = s-1;
			v= t;
			
			if(u>0 && u<=a && v>0 && v<=b && !check[u][v]) { 
				check[u][v]=true;
				c1[u][v] = c1[s][t] + 1;
				qu.push(pii(u,v));				
			}
			
			u = s;
			v = t-1;
			if(u>0 && u<=a && v>0 && v<=b && !check[u][v]) { 
				check[u][v]=true;
				c1[u][v] = c1[s][t] + 1;
				qu.push(pii(u,v));				
			}
			
			u = s+1, v = t;
			if(u>0 && u<=a && v>0 && v<=b && !check[u][v]) { 
				check[u][v]=true;
				c1[u][v] = c1[s][t] + 1;
				qu.push(pii(u,v));				
			}
			u = s, v = t+1;
			if(u>0 && u<=a && v>0 && v<=b && !check[u][v]) { 
				check[u][v]=true;
				c1[u][v] = c1[s][t] + 1;
				qu.push(pii(u,v));				
			}
		}
		
		check.clear();
		
		cin >> y >> z;
		qu.push(pii(y,z));
		
		check[y][z]=true;
		c2[y][z]=0;
		
		while (!qu.empty()) { 
			int s = qu.front().first;
			int t = qu.front().second;
			
			qu.pop();
			
			int u,v;
			u = s-1;
			v= t;
			
			if(u>0 && u<=a && v>0 && v<=b && !check[u][v]) { 
				check[u][v]=true;
				c2[u][v] = c2[s][t] + 1;
				qu.push(pii(u,v));				
			}
			
			u = s;
			v = t-1;
			if(u>0 && u<=a && v>0 && v<=b && !check[u][v]) { 
				check[u][v]=true;
				c2[u][v] = c2[s][t] + 1;
				qu.push(pii(u,v));				
			}
			
			u = s+1, v = t;
			if(u>0 && u<=a && v>0 && v<=b && !check[u][v]) { 
				check[u][v]=true;
				c2[u][v] = c2[s][t] + 1;
				qu.push(pii(u,v));				
			}
			u = s, v = t+1;
			if(u>0 && u<=a && v>0 && v<=b && !check[u][v]) { 
				check[u][v]=true;
				c2[u][v] = c2[s][t] + 1;
				qu.push(pii(u,v));				
			}
		}
		
		check.clear();
		
		qu.push(pii(w,x));
		check[w][x]=true;
		m[w][x]=0;
		
		bool mark = false;
		while (!qu.empty()) { 
			int s = qu.front().first;
			int t = qu.front().second;
			
			qu.pop();
			if(s==a || t==b || s==1 || t==1) { 
				if ( m[s][t]<c1[s][t] && m[s][t]<c2[s][t] ) {
				mark = true;
				break;
				}
				}
			int u,v;
			u = s-1;
			v= t;
			
			if(u>0 && u<=a && v>0 && v<=b && !check[u][v]) { 
				check[u][v]=true;
				m[u][v] = m[s][t] + 1;
				if(u==a || v == b || u==1 || v==1) { 
					if ( m[u][v]<c1[u][v] && m[u][v]<c2[u][v]) {
					mark = true;
					break;					
					}
				}
				if ( m[u][v]<c1[u][v] && m[u][v]<c2[u][v])
					qu.push(pii(u,v));				
			}
			
			u = s;
			v = t-1;
			if(u>0 && u<=a && v>0 && v<=b && !check[u][v]) { 
				check[u][v]=true;
				m[u][v] = m[s][t] + 1;
				if(u==a || v == b || u==1 || v==1) { 
					if ( m[u][v]<c1[u][v] && m[u][v]<c2[u][v]) {
					mark = true;
					break;					
					}					
				}
				if ( m[u][v]<c1[u][v] && m[u][v]<c2[u][v])
				qu.push(pii(u,v));				
			}
			
			u = s+1, v = t;
			if(u>0 && u<=a && v>0 && v<=b && !check[u][v]) { 
				check[u][v]=true;
				m[u][v] = m[s][t] + 1;
				if(u==a || v == b || u==1 || v==1) { 
					if ( m[u][v]<c1[u][v] && m[u][v]<c2[u][v]) {
					mark = true;
					break;					
					}				
				}
				if ( m[u][v]<c1[u][v] && m[u][v]<c2[u][v])
				qu.push(pii(u,v));				
			}
			u = s, v = t+1;
			if(u>0 && u<=a && v>0 && v<=b && !check[u][v]) { 
				check[u][v]=true;
				m[u][v] = m[s][t] + 1;
				if(u==a || v == b || u==1 || v==1)
				if ( m[u][v]<c1[u][v] && m[u][v]<c2[u][v])  { 
					mark = true;
					break;					
				}
				if ( m[u][v]<c1[u][v] && m[u][v]<c2[u][v])
				qu.push(pii(u,v));				
			}
		}
		
		check.clear();

		if(mark)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	}
	
	
	return 0;
}
