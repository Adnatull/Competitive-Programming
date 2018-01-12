#include <iostream>

using namespace std;

class UVA11805 { 
	
	public:
		UVA11805(int a, int b, int c) { 
				c = c%a;
				b = (b+c)%a;
				if(b==0) b = a;
				cout << b << endl;
			
		}
	
};

int main() { 
		
	int test;
	cin >> test;
	int a,b,c;
	for (int i=1; i<=test; i++) { 
		cin >> a >> b >> c;
		cout << "Case " << i << ": " ;
		UVA11805 process(a,b,c);
	}	
	
	return 0;
}
