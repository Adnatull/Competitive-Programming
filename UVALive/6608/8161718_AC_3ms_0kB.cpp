#include <bits/stdc++.h>

#define pr printf 
#define sc scanf 
#define pb push_back
#define mp make_pair


typedef unsigned long long ULL;
typedef long long LL;
typedef unsigned long UL;
typedef long L;


using namespace std;

int gcd (int a,int b) { 
	
	if(b==0)
		return a;
	return gcd(b, a%b);
}

bool isprime(int n) { 
	
	int x =sqrt(n);
	for (int i=2; i<=x; i++)
		if(n%i==0)
			return false;
	return true;	
}


int main() { 
	
	//freopen ("in.txt", "r", stdin);
	
	int t;
	sc ("%d",&t);
	
	double a,b,c,d;
	int x = 0;
	while (t--) { 
		sc("%lf %lf %lf %lf",&a,&b,&c, &d);
		
		if((a<=56 && b<=45 && c<=25 && d<=7) || (a+b+c<=125 && d<=7)) { 
			cout << 1 << endl;
			x++;
		}
		else{
			cout << 0 << endl;

		}
	}
	cout << x << endl;
	
	return 0;
}
