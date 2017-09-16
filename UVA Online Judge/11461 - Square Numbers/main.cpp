#include <iostream>
#include <cmath>

using namespace std;


class UVA11461 { 
	public:
		UVA11461(long a, long b) { 
			int cnt = 0;
			for (long i=a; i<=b; i++) { 
				
				double x = i;
				x = sqrt(x);
				if(x==(long)x)cnt++;
				//if(sqrt(i)*sqrt(i)==i) cnt++;
			}
			cout << cnt << endl;
			
		}
};

int main() { 
	
	long a,b;
	while (cin >> a >> b) { 
		if(a==0 && b==0) break;
		
		UVA11461 process(a,b);
	}
	
	return 0;
}
