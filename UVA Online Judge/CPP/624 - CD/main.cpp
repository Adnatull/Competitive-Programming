
/*
 * Adnatull
 * 
 * Mail: adnaan.masum@outlook.com
 * Date: 2017-12-03
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

vi lst;
int mi = INT_MAX;	
int su;

void dp(int i, vi list, int sum,int total, int n, int a[]) { 
		if(i==n) { 
			if(abs(sum-total)<mi && sum<=total) { 
				mi = abs(sum-total);
				lst = list;
				su = sum;
				
			}
			return;
		}
		
		
		if(abs(sum-total)<mi && sum<=total) { 
				mi = abs(sum-total);
				lst = list;
				su = sum;
				
		}
		
		list.pb(a[i]);
		dp(i+1,list,sum+a[i],total,n,a);
		list.pop_back();
		dp(i+1,list,sum,total,n,a);
		
		return;	
}

int main() { 
	
	#ifndef ONLINE_JUDGE
		freopen("in.txt","r",stdin);
		//freopen("out.txt","w",stdout);
	#endif

	
	int total;
	while (cin >> total) { 
		int n;
		sci(n);
		int a[n];
		mi = INT_MAX;
		rep(i,n) sci(a[i]);
		
		vi tmp;
		dp(0,tmp,0,total,n,a);
		
		rep(i,sz(lst)) cout << lst[i] << " ";
		pr("sum:%d\n",su);	
	}

	return 0;
}
