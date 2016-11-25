#include<iostream>
#include<cstdio>

using namespace std;

long long x;

long long gcd(long long a,long long b) {
  if (b == 0) {
    return a;
  }
  else {
    return gcd(b, a % b);
  }
}

long long lcm(long long a, long long b) {

	x=gcd(a,b);

	return ((b*a)/x);
}


int main() {

	//freopen("in.txt","r", stdin );

	long long a,b,c;

	while (cin >> a >> b) {

		if(a==0 && b==0)
			break;

	//	if(a>b)
	//		swap(a,b);

		c=lcm(a,b);

		if(c%x==0)
			c=c/x;

		cout << c << endl;

	}

	return 0;

}