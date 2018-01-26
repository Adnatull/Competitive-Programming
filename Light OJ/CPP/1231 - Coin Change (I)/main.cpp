
/*
 * Adnatull Al Masum
 * Eastern University of Bangladesh
 * Mail: adnaan.masum@yahoo.com
 * Date: 2017-10-07
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

int n,k;
int a[100],b[100];	

int dp[11111][111];
int mod = 100000007;

int ans (int sum, int index) { 
	if(sum==k) return 1;
		
	if(index==n || sum>k) { 
		return 0;
	}
	if(dp[sum][index]!=-1) return dp[sum][index];

	int cnt = 0;
	for (int i=0; i<=b[index] ; i++) { 
		
		cnt += ans(sum+(i*a[index]),index+1);
		cnt %= mod;
	}
	
	return dp[sum][index] = cnt%mod;
	
}

int main() { 
	
	#ifndef ONLINE_JUDGE
		freopen("in.txt","r",stdin);
		//freopen("out.txt","w",stdout);
	#endif
	
	//ios_base::sync_with_stdio(0);
	
	int t;
	sci(t);
	
	test_case(t) { 
		scii(n,k);
		fill(dp,-1);
		rep(i,n) sci(a[i]);
		rep(i,n) sci(b[i]);
		
		int solution = ans(0,0);
		
		
		print_case;
		pr("%d\n",solution);
		clr(a);
		//fill(dp,-1);
	}
	


	return 0;
}
