
/*
 * Masum
 * 
 * Mail: adnaan.masum@yahoo.com
 * Date: 2018-03-08
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

	

int main() { 
	
	#ifndef ONLINE_JUDGE
		freopen("in.txt","r",stdin);
		freopen("out.txt","w",stdout);
	#endif	
	ios_base::sync_with_stdio(0);cin.tie(0);	
	int test;
	cin >> test;
	test_case(test) { 
		int n,m;
		LL k;
		cin >> n >> m >> k;
		LL arr[n][m];
		rep(i,n) rep(j,m) cin >> arr[i][j];		
		LL area = 0 , ans = k;
		for (int left = 0; left<m; left++) {
				LL tempSum[n];
				clr(tempSum);				
				for (int right = left; right < m; right++) {
					for (int i=0; i<n; i++) 
						tempSum[i] += arr[i][right];
					for (int i=0; i<n; i++) {
						int tsum = 0;
						for (int j=i; j<n; j++) {
							tsum += tempSum[j];
							if ( (j-i+1)*(right-left+1) > area && tsum<=k) {
								area = (j-i+1)*(right-left+1);
								ans = tsum;
							}
							else if ( (j-i+1)*(right-left+1) == area && tsum<ans) {
								area = (j-i+1)*(right-left+1);
								ans = tsum;
							}
						}
					}
				}
			}
			if (area == 0)
				ans = 0;
			cout << "Case #" << cases << ": ";
			cout << area << " " << ans << endl;
	}
	return 0;
}
