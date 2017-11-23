
/*
 * Adnatull Al Masum
 * Eastern University of Bangladesh
 * Mail: adnaan.masum@yahoo.com
 * Date: 2017-11-24T12:04:58.642Z
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



int parent[1234567];

void setInitialParent() {
		for (int i=0; i<1234567; i++) parent[i] = i;

}

int fin (int r) {
	if(parent[r]==r) return r;
	return parent[r] = fin(parent[r]);
}
void unio (int x, int y) {

		int u = fin(x);
		int v = fin(y);

		parent[u] = parent[v];
}

struct node {
	int u, v;
	double cost;

	node(int x,int y, double z) {
		u = x, v = y, cost = z;
	 };

	 bool operator < (node other) const {
			return cost<other.cost;
		  };

};

struct point {
	int x,y;
};
int main() {

	#ifndef ONLINE_JUDGE
		freopen("in.txt","r",stdin);
		freopen("out.txt","w",stdout);
	#endif

	ios_base::sync_with_stdio(0);

	int t;
	sci(t);
	test_case(t) {

		int s,n;
		scii(s,n);
			int x,y;
			point vertex[n+1];
			rep(i,n) {
				parent[i]=i;
				scii(x,y);
				vertex[i].x=x;
				vertex[i].y=y;
			}
			vector < node > edge;
			rep(i,n) {
				for (int j=i+1; j<n; j++) {
					double Ln = sqrt(pow(vertex[i].x - vertex[j].x, 2) + pow(vertex[i].y - vertex[j].y, 2));
					edge.pb(node(i,j,Ln));
				}
			}
			sort(all(edge));
			vector < node > nlist;
			int cnt = 0;

			for (int i=0; cnt!=n-1 && i<sz(edge); i++) {

				int a = fin(edge[i].u);
				int b = fin(edge[i].v);
				if (a != b) {
						unio(a,b);
						nlist.pb(node(edge[i].u,edge[i].v,edge[i].cost));
						cnt++;
				}
			}



					cout << fixed << setprecision(2) << nlist[n-s-1].cost << endl;
	}

	return 0;
}
