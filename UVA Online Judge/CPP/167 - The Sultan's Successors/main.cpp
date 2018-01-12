
/*
 * Adnatull
 * 
 * Mail: adnaan.masum@outlook.com
 * Date: 2018-01-01
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

int a[9][9];

int max_so_far;

pair < int, int > queen[9];

bool isvalid(int row, int column) { 
	
	for (int i=1; i<row; i++)  {
			if( queen[i].ss==column || queen[i].ss-queen[i].ff==column-row || queen[i].ss+queen[i].ff==column+row) return false;
	}
	return true;
}


void generate(int row) { 
	
	if(row==9) { 
		int tot=0;
		FOR(i,1,8) { 
			tot+= a[queen[i].ff][queen[i].ss];
		}
		max_so_far = max(max_so_far,tot);
		return;
	}
	
	FOR(i,1,8) { 
		if(isvalid(row,i)) { 
			queen[row]=mp(row,i);
			generate(row+1);
		}
	}	
}

int main() { 
	
	//freopen ("in.txt", "r", stdin);
	
	int n;
	sci(n);
	test_case(n) { 
		FOR(i,1,8) { 
			FOR(j,1,8) { 
				sci(a[i][j]);
			}
		}
		
		max_so_far = 0;
		
		generate(1);

		stringstream ss;
		ss << max_so_far;
		
		string s;
		ss >> s;
		
		for(int i=1; i<=5-sz(s); i++) cout << " ";
		cout << s << endl;
		
		
	}
	
	
	return 0;
}
