#include <bits/stdc++.h>

using namespace std;

int main() { 
	
	//freopen ("in.in","r", stdin);
	
	int n;
	scanf ("%d%*c",&n);
	
	for (int i=1; i<=n;i++) {
		
			string s,t;
			char c;
			while (true) {
				scanf ("%c",&c);
				if(c=='\n')
					break;
				if(isupper(c) )
					c = tolower(c);
				if(c!=32)
					s.insert(s.end(),c);
			}
			
			while (true) {
				scanf ("%c",&c);
				if(c=='\n')
					break;
				if(isupper(c) )
					c = tolower(c);
				if(c!=32)
					t.insert(t.end(),c);
			}
			
			sort (s.begin(), s.end());
			sort(t.begin(), t.end());
			printf ("Case %d: ",i);
			if(s==t)
				printf ("Yes\n");
			else
				printf ("No\n");
		
	}
	
	return 0;
}
