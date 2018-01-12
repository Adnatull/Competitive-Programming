#include <bits/stdc++.h>

using namespace std;

bool possible ( int index, int sum, int a[] ) { 
		if (index==5) { 
				if(sum==23) return true;
				else return false;
		}
		bool possi = false;
		for (int i=0; i<3; i++) { 
			if(i==0) { 
				bool xx = possible ( index+1, sum+a[index], a);
				if( xx== true) { possi = true; break;}
			} else if(i==1) { 
				bool xx = possible ( index+1, sum-a[index], a);
				if( xx== true) { possi = true; break;}
			} else if(i==2) { 
				bool xx = possible ( index+1, sum*a[index], a);
				if( xx== true) { possi = true; break;}
			}
		}
		return possi;
}

int main() { 
	
//	freopen ("in.txt" , "r", stdin);
	//freopen ("out.txt", "w", stdout);
	
	string s,p="0 0 0 0 0";
	while (getline(cin,s)) { 
		if(s==p) break;
		int a[5];
		stringstream ss;
		ss.str(s);
		int index=0;
		while ( ss >> a[index++] );
		bool hobe = false;
		sort(a,a+5);
		do { 
			if( possible(1,a[0],a) ) { 
				hobe = true;
				break;
			}
		} while ( next_permutation(a,a+5) );
		
		if(hobe) cout << "Possible" << endl;
		else cout << "Impossible" << endl;	
	}
	return 0;
}
