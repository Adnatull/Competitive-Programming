#include <iostream>
#include <map>
#include <string>

using namespace std;

class UVA10921 { 
	
	public:
		UVA10921 (string s) { 
			
			map < char , int > chart;
			
			chart['A'] = 2, chart['B'] = 2, chart['C'] = 2;
			chart['D'] = 3, chart['E'] = 3, chart['F'] = 3;
			chart['G'] = 4, chart['H'] = 4, chart['I'] = 4;
			chart['J'] = 5, chart['K'] = 5, chart['L'] = 5;
			chart['M'] = 6, chart['N'] = 6, chart['O'] = 6;
			chart['P'] = 7, chart['Q'] = 7, chart['R'] = 7, chart['S'] = 7;
			chart['T'] = 8, chart['U'] = 8, chart['V'] = 8;
			chart['W'] = 9, chart['X'] = 9, chart['Y'] = 9, chart['Z'] = 9;
			
			for (unsigned int j=0; j<s.size(); j++) { 
					if(isalpha(s[j])) cout << chart[s[j]];
					else cout << s[j];
				}
				cout << endl;			
		}
};

int main() {
	
	string s;
	while (cin >> s) { 
		
		UVA10921 process(s);
		
	}
	
	return 0;
} 
