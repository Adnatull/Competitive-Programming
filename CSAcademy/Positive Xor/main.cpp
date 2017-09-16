#include <iostream>

using namespace std;

int main() { 
	
	int n;
	cin >> n;
	
	int a[n];

	for (int i=0; i<n; i++) { cin >> a[i]; 
		
		}
	int x = a[0];
	int b[n];
	b[0] = x;
	//cout << x << " ";
	for (int i=1; i<n; i++) { 
		x= x^a[i];
		b[i] = x;
		//cout << x << " ";
	}
	
	bool first = false;
	int m1,m2;
	
	for (int i=0; i<n; i++) { 
		if(b[i]) { 
			if(!first) { first = true; m1 = i;}
			m2 = i;
		}
		
	}
	
	cout << m2+1 << endl;
	
	
	return 0;
}
