#include <iostream>


using namespace std;

int main() {
	
	int a[]= {4,1,2,3,1,2,3,1,2,3};
	
	long n;
	cin >> n;
	
	n %= 10;
	int x = (int) n;
	cout << a[x] << endl;
	
	return 0;
} 


