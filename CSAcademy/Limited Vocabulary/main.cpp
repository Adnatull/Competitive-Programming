#include <bits/stdc++.h>

using namespace std;

int main() { 
	
	int n,k;
	scanf ("%d %d", &n, &k);
	cin.ignore();
	string s[n];
	//string ans = "";
	int len = 0;
	for (int i=0; i<n; ++i) { 
		cin >> s[i];
		map < char, bool > check;
		int cnt = 0;
		for (unsigned int j=0; j<s[i].size(); j++) { 
			if(!check[s[i][j]]) { 
				cnt++;
				check[s[i][j]] = true;
			}
		}
		if(cnt<=k) { 
			if((int)s[i].size()>len) len = s[i].size();
		} 
		
	}
	if(len==0) printf ("-1\n");
	else cout << len << endl;
	
	return 0;
}
