#include <bits/stdc++.h>

using namespace std;

void process(vector < string > s) { 
	set < string > pattern;
	map < string, int > count;
	
	for (unsigned int i=0; i<s.size(); ++i) {
		for (unsigned int j=i+1; j<s.size(); j++) { 
			count[s[i]+s[j]]++;
			count[s[j]+s[i]]++;
			pattern.insert(s[i]+s[j]);
			pattern.insert(s[j]+s[i]);
		}
	}
	int ans = 0;
	string an = "";
	for (auto i=pattern.begin(); i!=pattern.end(); ++i) { 
			if ( count[*i] > ans) { 
				an = *i;
				ans = count[*i];
			}
			
	}
	cout << an << endl;
	
}

int main() { 
	
	//freopen( "in.txt", "r", stdin);
	
	int test;
	cin >> test;
	vector < string > lst;
	string tmp;
	cin.ignore();
	cin.ignore();
	for (int cases = 1; cases <= test; cases++)  {		
		while (getline( cin, tmp)) { 
			if ( tmp == "") { 
				break;				
			} else { 
				lst.push_back(tmp);
			}
		}
		process(lst);
		if (cases!=test) cout << endl;
		lst.clear();		
	}	
	return 0;
}
