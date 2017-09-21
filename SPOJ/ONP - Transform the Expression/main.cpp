#include <bits/stdc++.h>

using namespace std;

class ONP { 
	
	private:
	
	public:
	
		ONP (string s) { 
			stack <char> bracket, value, symbol;
			char c;
			string p = "";
			for (unsigned int j=0; j<s.size(); j++) { 
					c = s[j];
					if(c=='(') bracket.push(c);
					else if (isalpha(c)) p.push_back(c);
					else if (c=='+' || c=='-' || c=='*' || c=='/' || c=='^') symbol.push(c);
					else { 
						bracket.pop();
						c = symbol.top();
						p.push_back(c);
						symbol.pop();

					}
				
			}
			cout << p << endl;
			
		}
	
} ;

int main() { 
	
	int n;
	cin >> n;
	
	cin.ignore();
	string s;
	
	for (int i=1; i<=n; i++) { 
		cin >> s;
		
		ONP process(s);
		
	}
	
	return 0;
}
