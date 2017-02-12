#include <bits/stdc++.h>

using namespace std;

vector < int > check (1000001);
vector < int > press (1000001);

int main() { 
	
	int f, s, g, u, d;
	
	cin >> f >> s >> g >> u >> d;
	
//	map < int, bool > check;
	//map <int, int > press;
	
	queue < int > q;
	q.push(s);
	check[s]=true;
	press[s]=0;
	
	while (!q.empty()) { 
		
		int x = q.front();
		q.pop();
		
		if(x==g) { 
			cout << press[x] << endl;
			return 0;
		}
		
		int y = x+u;
		
		if(y>=1 && y<=f) { 
			if(!check[y]) { 
				check[y] = true;
				press[y]=press[x]+1;
				if(y==g) { 
					cout << press[y] << endl;
					return 0;
				}
				q.push(y);
			}
		}
		
		y = x - d;
		
		if(y>=1 && y<=f) { 
			if(!check[y]) { 
				check[y] = true;
				press[y]=press[x]+1;
				if(y==g) { 
					cout << press[y] << endl;
					return 0;
				}
				q.push(y);
			}
		}
		
	}
	cout << "use the stairs" << endl;
	
	
	return 0;
}
