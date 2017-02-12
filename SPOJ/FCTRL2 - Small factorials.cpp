#include <bits/stdc++.h>

using namespace std;

int main() { 
	
	int t;
	scanf ("%d",&t);
	
	int n;
	while (t--) { 
	
		scanf ("%d",&n);
		
		string s;
		string ans = "1";
		
		while (n!=1) { 
			
			reverse(ans.begin(), ans.end());
			int carry =0;
			for (int i=0; i<ans.size();i++) { 
				
				int u = ans[i]-48;
				
				u = (u*n)+carry;
				
				ans[i]=u%10+48;
				carry = u/10;				
				
			}
			
			while (carry>0) { 
				
				ans.insert(ans.end(), carry%10+48);
				carry /= 10;				
			}
			reverse(ans.begin(), ans.end());			
			
			n--;
		}
		cout << ans << endl;
		
	}
	
	
	return 0;
}
