
/*
 * Adnatull
 * 
 * Mail: adnaan.masum@outlook.com
 * Date: 2018-01-02
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
pair < int, int > queen[9];

bool present[9];

bool valid ( int row, int column) { 
	
	for (int i=1; i<=8; i++) { 
		if(present[i] && ( column-row==queen[i].ss-queen[i].ff || row==queen[i].ff || column+row==queen[i].ff+queen[i].ss) ) return false;
	}
	return true;
	
}
int cnt=0;
void backtrack(int column) {
	//cout << column << " = " << endl;
	if (column==9) { 
		cnt++;
		if(cnt<10) cout << " ";
		cout << cnt << "     ";
		for (int i=1; i<=8; i++) cout << " " << queen[i].ff ;
		cout << endl;
		
		return ;
	}
	
	if(present[column])  backtrack(column+1);
	else { 
		for (int row=1; row<=8; row++) { 
			if(valid(row,column)) { 
				present[column] = true;
				a[row][column]= 1;
				queen[column]=mp(row,column);
				backtrack(column+1);
				present[column] = false;
				a[row][column] = 0;
			}
		}
	} 
	
	
	
	
}

int main() { 
	
	//freopen ("in.txt", "r", stdin);
	//freopen ("out.txt", "w", stdout);
	int test;
	sci(test);
	test_case(test) { 
		if(cases>1) cout << endl;
		int x,y;
		scii(x,y);
		a[x][y] = 1;
		queen[y] = mp(x,y);
		present[y]= true;
		cout << "SOLN       COLUMN" << endl;
		cout << " #      1 2 3 4 5 6 7 8" << endl << endl;
		backtrack(1);
		
		
		clr(a);
		clr(present);
		clr(queen);	
		cnt =0;	
		
	}
}
