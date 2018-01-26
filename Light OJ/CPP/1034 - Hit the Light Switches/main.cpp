
/*
 * Adnatull Al Masum
 * Eastern University of Bangladesh
 * Mail: adnaan.masum@yahoo.com
 * Date: 2017-10-02
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
#define sz(a) (int)a.size()
#define LL long long 
#define L long 
#define FOR(i, a, b) for (int i=(a); i<=(b); i++)
#define RFOR(i, a, b) for (int i=(a); i>=(b); i--)
#define rep(i,n) for (int i=(0); i<(n); i++)
#define rrep(i,n) for (int i=(n-1); i>=(0); i--)
#define INF (int)1e9+1
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define nn printf ("\n")
#define fill(a, v) memeset(a, v, sizeof a)
#define clr(a) memset(a, 0, sizeof a)
#define ff first
#define ss second
#define all(a) a.begin(),a.end()
#define skip cin.ignore()
#define globalArray 12345678
#define localArray 1234567

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


void dfs (int source, bool visited[], vi graph[] ) { 
	
	if(visited[source]) return;
	visited[source]=true;
	int l = graph[source].size();
	rep(i,l) { 
		int v = graph[source][i];
		if(!visited[v]) dfs(v,visited,graph);
	}
	
}


vector < int > lst;

void topsort(int source, bool visited[],vi graph[]) { 
	if(visited[source]) return;
	
	visited[source] = true;
	
	rep(i,sz(graph[source]))
		if(!visited[graph[source][i]]) topsort(graph[source][i],visited,graph);
	lst.pb(source);
	
}
	

int main() { 
	
	#ifndef ONLINE_JUDGE
		freopen("in.txt","r",stdin);
		freopen("out.txt","w",stdout);
	#endif
	
	ios_base::sync_with_stdio(0);
	
	int t;sci(t);
	FOR(i,1,t) { 
		int n,e;
		scii(n,e);
		vi graph[n+1];
		
		int x,y;

		FOR(j,1,e) { 
			scii(x,y);
			graph[x].pb(y);
			
	
		}
		
		bool visited[n+1];
		clr(visited);
		stack <int> st;
		
		FOR(j,1,n) { 
			if(!visited[j]) { 
				topsort(j,visited,graph);
				rep(k,sz(lst)) { 
					st.push(lst[k]);
				}
				lst.clear();
			}
		}
		clr(visited);
		int cnt = 0;
		while(!st.empty()) { 
			int v = st.top();

			st.pop();
			if(!visited[v]) { 
				cnt++;
				dfs(v,visited,graph);
			}
			
		}
		

		
		printf("Case %d: %d\n",i,cnt);
		
	}
	


	return 0;
}
