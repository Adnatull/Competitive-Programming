
/*
 * Adnatull Al Masum
 * Eastern University of Bangladesh
 * Mail: adnaan.masum@yahoo.com
 * Date: 2017-09-24
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
#define pb push_back
#define mp make_pair
#define sz(a) a.size()
#define LL long long 
#define L long 
#define FOR(i, a, b) for (int i=(a); i<=(b); i++)
#define RFOR(i, a, b) for (int i=(a); i>=(b); i--)
#define rep	(i,n) for (int i=(0); i<(n); i++)
#define rrep(i,n) for (int i=(n-1); i>=(0); i--)
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define nn printf ("\n")
#define fill(a, v) memeset(a, v, sizeof a)
#define clr(a) memeset(a, 0, sizeof a)
#define ff first
#define ss second
#define all(a) a.begin(),a.end()
#define skip cin.ignore()

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
	
	//ios_base::sync_with_stdio(0);
	int t;
	sci(t);
	
	skip;
	skip;
	
	for (int i=1; i<=t; i++) { 
		if(i>1) nn;
		vs ls;
		map < string, int > cnt;
		string s;
		int l = 0;
		while (getline(cin,s) && (int)sz(s)) { 
			if(!cnt[s])ls.pb(s);
			 cnt[s]++;
			
			l++;
		}
		sort(all(ls));
		for (unsigned int j=0; j<ls.size(); j++) { 
			s = ls[j];
			double xx  = (double)((double)100/l)*cnt[s];
			
			cout << s << " " << fixed << setprecision(4) << xx << endl; 
			
		}
		
		
	}


	return 0;
}
