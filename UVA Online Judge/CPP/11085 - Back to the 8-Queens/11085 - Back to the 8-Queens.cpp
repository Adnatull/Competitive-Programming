
/*
 * Adnatull
 * 
 * Mail: adnaan.masum@outlook.com
 * Date: 2018-01-10
 * */
 

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <map>
#include <climits>
#include <string>
#include <vector>
#include <set>
#include <queue>
#include <algorithm>
#include <functional>
#include <iomanip>
#include <sstream>
#include <stack>
#include <list>
#include <deque>
#include <cmath>
#include <numeric>
#include <iterator>
#include <utility>


using namespace std;

#define sci(a) scanf ("%d",&a)
#define scii(a,b) scanf ("%d %d",&a,&b)
#define sc scanf
#define pr printf 
#define pb push_back
#define mp make_pair
#define sz(a) (int)a.size()
#define LL long long 
#define L long 
#define FOR(i,a,b) for (int i=(a); i<=(b); i++)
#define RFOR(i,a,b) for (int i=(a); i>=(b); i--)
#define rep(i,n) for (int i=(0); i<(n); i++)
#define rrep(i,n) for (int i=(n-1); i>=(0); i--)
#define INF (int)1e9+1
#define EPS (int)1e-9
#define PI 3.1415926535897932384626433832795
#define MOD (int)1000000007
#define nn printf ("\n")
#define fill(a, v) memset(a, v, sizeof a)
#define clr(a) memset(a, 0, sizeof a)
#define ff first
#define ss second
#define all(a) a.begin(),a.end()
#define skip cin.ignore()
#define Global (int)12345678
#define Local (int)1234567
#define test_case(n) FOR(cases,1,n)
#define print_case printf("Case %d: ",cases)

const double pi=acos(-1.0);
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef map<int,int> mpii;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;

int before[9];	
int mi;
pair < int, int > queen[9];

bool isvalid(int row, int column) { 
	
	for (int i=1; i<column; i++) { 
		if(column-row==queen[i].ss-queen[i].ff || column+row==queen[i].ff+queen[i].ss || row==queen[i].ff) return false;
	}
	return true;
}

void backtrack (int column, int dis) { 
	
		if(column==9) { 
			mi = max (mi,dis);
			return;
		}
		
		
		for (int row=1; row<=8; row++) { 
			if(isvalid(row,column)) {
				queen[column] = mp(row,column);
				if(row==before[column]) 
					backtrack(column+1,dis+1);
				else
					backtrack(column+1,dis);
			}
		}
	
}

int main() { 
	
	#ifndef ONLINE_JUDGE
		freopen("in.txt","r",stdin);
		//freopen("out.txt","w",stdout);
	#endif
	
	//ios_base::sync_with_stdio(0);
	
	//int x;
	int cases=1;
	string s;
	while (getline(cin,s)) { 
	//	cout << s << endl;
		stringstream ss;
		ss.str(s);
		
		
		
		int i=1;
		while (ss >> before[i++])
		
	/*	before[i] = x;
		for (int i=i+1; i<=8; i++) { 
			cin >> x;
			before[i] = x;
		}*/
		
		mi  = 0;
		
		backtrack(1, 0);
		print_case;
		cout << 8-mi << endl;
		cases++;		
		
	}
	


	return 0;
}

