#include <bits/stdc++.h>

using namespace std;

int main() { 
	
	string s;
	
	while (cin >> s ) { 
		
		if(s=="Q")
			break;
		
		
		//int l = s.size();
		
		map < int, map < int , bool > > g;
		g[0][0]=true;
		int c= 0;
		
		int x =0, y = 0;
		for (int i=0; s[i]!='Q'; i++) { 
			
			if(s[i]=='U')
				y += 1;
			else if(s[i]=='D')
				y -= 1;
			else if (s[i]=='L')
				x -= 1;
			else
				x += 1;
				
			if(g[x][y]==true)
				c++;
			else
				g[x][y]=true;
				
			}
		cout << c << endl;
		
	}
	
	return 0;
}
