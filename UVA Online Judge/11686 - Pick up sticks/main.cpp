
/*
 * Adnatull
 * 
 * Mail: adnaan.masum@outlook.com
 * Date: 2017-12-02
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

vector < int > lst;

void topsort(int source, bool visited[], vector < int> graph[]) { 
	if(visited[source]) return;
	
	visited[source] = true;
	
	rep(i,(int)graph[source].size())
		if(!visited[graph[source][i]]) topsort(graph[source][i],visited,graph);
	lst.pb(source);
	
}

vi tmp;
void dfs (int source, bool visited[], vi graph[] ) { 
	
	if(visited[source]) return;
	visited[source]=true;
	tmp.pb(source);
	int l = graph[source].size();
	rep(i,l) { 
		int v = graph[source][i];
		if(!visited[v]) dfs(v,visited,graph);
	}
	
}

	

int main() { 
	
	#ifndef ONLINE_JUDGE
		freopen("in.txt","r",stdin);
		//freopen("out.txt","w",stdout);
	#endif
	
	ios_base::sync_with_stdio(0);
	
	int n,e;
	while (scii(n,e)) { 
		if(n==0 && e==0) break;
		lst.clear();
		vi graph[n+1],rgraph[n+1];
		
		int x,y;
		rep (i,e) { 
			scii(x,y);
			graph[x].pb(y);
			rgraph[y].pb(x);
		}
		bool visit[n+1];
		clr(visit);
		FOR (i,1,n) { 
			if(!visit[i]) { 
				topsort(i,visit,graph);
			}
		}
		reverse(all(lst));
		
		clr(visit);
		
		bool possible = true;
		vi flst;
		rep(i,sz(lst)) { 
			int u = lst[i];
			if(!visit[u]) { 
				tmp.clear();
				dfs(u,visit,rgraph);
				if(tmp.size()>1) { 
						possible = false;
						break;
				}
				else { 
					rep(j,sz(tmp)) flst.pb(tmp[j]);
				}
			}
		}
		if(possible == false) pr ("IMPOSSIBLE\n");
		else  { 
			rep(i,sz(flst)) pr("%d\n",flst[i]);
		}
		
	}
	


	return 0;
}
