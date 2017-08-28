#include <bits/stdc++.h>

using namespace std;

int main() { 
	
	//freopen ("in.txt", "r", stdin);
	
	int t;
	cin >> t;
	cin.ignore();
	cin.ignore();
	
	string xx = "";
	
	for (int i=1; i<=t; i++) { 
		if(i>1) cout << endl;
		
		vector < string > lst;
		
		map < string, vector < string> > graph;
		
		if(xx!="") lst.push_back(xx);
		
		string p;
		while (cin >> p ) { 
			if(p=="*") break;
			int l = p.size();
			for (unsigned int j=0; j<lst.size(); j++) { 
				
				if(l==(signed)lst[j].size()) { 
					int omil = 0;
					for (int k=0; k<l; k++) { 
						if(omil>1) break;
						if(p[k]!=lst[j][k]) omil++;
					}
					if(omil==1) { 
						graph[p].push_back(lst[j]);
						graph[lst[j]].push_back(p);
					}
					
				}
				
			}
			lst.push_back(p);
		}
		

		while(getline(cin,p)) { 
			if(p.size()==0) continue;
			stringstream ss(p);
			
			
			
			string a, b;
			int cnt =0;
			while(ss>>a) { cnt++;}
			if(cnt==1) { 
				xx = a;
				break; }
			
			stringstream sp(p);
			sp >> a;
			sp >> b;
			
			
			map < string, int > dist;
			map < string, bool > vis;
			
			queue < string > q;
			
			q.push(a);
			
			dist[a] = 0;
			vis[a] = true;
			
			while (!q.empty()) { 
				string u = q.front();
				q.pop();
				bool found = false;
				
				for (unsigned int j=0; j<graph[u].size(); j++) { 
					string v = graph[u][j];
					if(!vis[v])  { 
						vis[v] = true;
						dist[v] = dist[u] + 1;
						q.push(v);
						if(v==b)  { 
							found = true;
							break;
						}
					}
					
				}
				if(found) break;
				
			}
			cout << a << " " << b << " ";
			cout << dist[b] << endl;
			
			
			
		}
		
	}
	
	return 0;
}
