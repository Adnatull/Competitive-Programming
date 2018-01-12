#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

class UVA11777 {
	
	private:
	
	public:
	
	UVA11777(int mark[]) { 
		int sum = 0;
		for (int i=0; i<4; i++) sum += mark[i];
		int a[3];
		for (int i=4,j=0; i<7; i++,j++) a[j] = mark[i];
		
		sort(a,a+3,greater<int>());
		sum += (a[0]+a[1])/2;
		
		if (sum>=90) cout << 'A' << endl;
		else if (sum>=80) cout << 'B' << endl;
		else if (sum >=70) cout << 'C' << endl;
		else if (sum >=60) cout << 'D' << endl;
		else cout << 'F' << endl;
		
		
	}
	
};

int main() {
	
	int test;
	cin >> test;
	
	for (int i=1; i<=test; i++) { 
		int a[7];
		for (int j=0; j<7; j++) cin >> a[j];
		cout << "Case " << i << ": ";
		UVA11777 process(a);
	}
	
	return 0;
}
