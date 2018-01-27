
/*
 * Adnatull
 * 
 * Mail: adnaan.masum@outlook.com
 * Date: 2018-01-28
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

bool isvalid (int x, int y,int r, int c, string s[]) { 
		string zz = "IEHOVA";
		if(x<0 || x>=r || y<0 || y>=c) return false;
		for (int i=0; i<(int)zz.size(); i++) { 
			if(zz[i]==s[x][y]) return true;
		}
		if(s[x][y]=='#') return true;
		return false;
}
int visit[100][100];
void khujteThako(int x, int y, int r, int c, string s[], vector <string>  ans) { 
	visit[x][y] = 1;
	if(s[x][y]=='#') { 	
		for (int i=0; i<(int)ans.size(); i++) { 
			if(i>0) cout << " ";
			cout << ans[i] ; }
		cout << endl;		
		return;
		
	}	
	if(isvalid(x,y-1,r,c, s) && visit[x][y-1]==0) {
		ans.pb("left"); 
		khujteThako(x,y-1,r,c,s,ans);
		ans.pop_back();
	}
	if(isvalid(x,y+1,r,c,s) && visit[x][y+1]==0) { 
		ans.pb("right");
		khujteThako(x,y+1,r,c,s,ans);
		ans.pop_back();
	}
	if(isvalid(x-1,y,r,c,s) && visit[x-1][y]==0) { 
		ans.pb("forth");
		khujteThako(x-1,y,r,c,s,ans);
		ans.pop_back();
	}	
}

int main() { 
	
	#ifndef ONLINE_JUDGE
		//freopen("in.txt","r",stdin);
		//freopen("out.txt","w",stdout);
	#endif
	

	
	int test;
	sci(test);
	test_case(test) { 
		int r,c;
		scii(r,c);
		string s[r];
		for (int i=0; i<r; i++) cin >> s[i];
		
		int startX,startY;
		startX = r-1;
		for (int i=0; i<c; i++) if(s[r-1][i]=='@') startY = i;
		clr(visit);
		vector < string > ans;
		khujteThako(startX,startY,r,c,s,ans);
	}
	


	return 0;
}
