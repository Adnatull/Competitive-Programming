#include <iostream>

using namespace std;

class KthSpecialNumber { 
	
	private:
	
	public:
	
		KthSpecialNumber(int n) {
			
			int x = 0;
			int cnt = 0;
			while (cnt!=n) { 
				
				x++; 
				int r = x;
				string s;
				while (r!=0){
					s.push_back(r%2+48);
					r /= 2;
				}
				bool possible = true;
				for (unsigned int j=1; j<s.size(); j++) if(s[j]=='1' && s[j-1]=='1') { 
					possible = false;
					break;
					}
				if(possible) cnt++;
				
				
			}
			cout << x << endl;
			
			
			
		}
	
};

int main() { 
	
	int k;
	cin >> k;
	
	KthSpecialNumber process(k);
	
	return 0;	
}
