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


bool compare ( pair< int ,int > &left, pair < int, int> &right) { 
	
	int a = left.second - left.first;
	
	int b = right.second - right.first;
	
	if(a>b)
		return false;
	
	return true;
	}

int main() { 
	
	//freopen ("in.txt", "r", stdin);
	
	int t;
	sc ("%d",&t);
	
	for (int i=1; i<=t; i++) { 
			
		int x,y;
		
		vector < pair < int , int > > pii;
		
		while (cin >> x >> y) { 
			if(x==0 && y==0)
				break;	
			pii.pb(mp(x,y));
					
		}
		
		sort(pii.begin(), pii.end(), compare);
	//	for (unsigned int j=0; j< pii.size(); j++)
		//	cout << pii[j].first << " = " << pii[j].second << endl;
			
		map < int , bool > f;
		
		
		int c= 0;
		for (unsigned j = 0; j<pii.size(); j++) { 
			
			int a = pii[j].first;
			int b = pii[j].second;
			
			bool found = false;
			
			for (int k=a; k<b; k++)
				if(f[k])
					found = true;
			if(!found) { 
				c++;
				for (int k=a; k<b; k++)
					f[k]=true;
				
				}
			
		}
		cout << c << endl;
		
	}
	
	return 0;
}