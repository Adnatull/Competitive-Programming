#include <bits/stdc++.h>

#define LL long long 

using namespace std;

int main() {
	int t;
	scanf ("%d",&t);
	
	for (int i=1; i<=t; i++ ) { 
		
		printf ("Case %d:\n",i);
		
		string com;
		vector <string> s;
		s.push_back("http://www.lightoj.com/");
		int j=0;
		while (true) { 
				cin >> com;
				if(com=="QUIT")
					break;
				if(com=="VISIT") {
					j++;
					s.erase(s.begin()+j,s.end());
					cin >> com;
					s.push_back(com);
					cout << com << endl;
				 }
				else if (com=="BACK") {
					j--;
					if(j>=0)
						cout << s[j] << endl;					
					
					else {
						j++;
						cout << "Ignored" << endl;
					}
				}
				else if (com=="FORWARD") { 
					j++;
					if(j>=s.size()) {
						j--;
						cout << "Ignored" << endl;						
						 }
					else {
						cout << s[j] << endl;
					 } 
					
					}
				
		}
		
	}
	
	return 0;
}
