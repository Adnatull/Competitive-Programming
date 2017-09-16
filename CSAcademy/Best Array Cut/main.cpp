#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>


using namespace std;

class bestArrayCut { 
	
	private:
	
	int l;

	public:
	bestArrayCut(int n, int a[]) { 
		int c[n];
		memset(c, 0, sizeof c);
		
		
		for (int i=1; i<n; i++) 
			c[i] = a[i]+c[i-1];
		
		int mi = 1e8;

		for (int i=1; i<n-1; i++) { 
			mi = min ( mi, abs((c[n-1]-c[i])-c[i]));
		}
		cout << mi << endl;
		
	}
	
};


int main() { 
	
	int n;
	scanf ("%d", &n);
	int a[n+1];
	for (int i=1; i<=n; i++) scanf ("%d", &a[i]);
	
	bestArrayCut bac(n+1,a);
	
	return 0;
}
