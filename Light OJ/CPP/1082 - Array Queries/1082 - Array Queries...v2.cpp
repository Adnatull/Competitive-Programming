#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>
#include <cctype>
#include <string>
#include <functional>
#include <cmath>
#include <climits>
#include <utility>

typedef long long LL;
typedef unsigned long long ULL;
typedef long L;
typedef unsigned long UL;

#define pb push_back
#define mp make_pair
#define pr printf
#define sc scanf


using namespace std;

	int n;
	int A[123456],segmentTree[123456*4];
	//vector < int > A, segmentTree;
	int left (int p) { return p<<1;};
	int right (int p) { return (p<<1)+1;}

	void buildTree(int p, int L, int R) {

			if(L==R) segmentTree[p]=L;
			else {
				int mid = (L+R)/2;
				buildTree(left(p),L,mid);
				buildTree(right(p),mid+1,R);
				int p1=segmentTree[left(p)], p2 = segmentTree[right(p)];
				segmentTree[p]=A[p1]<A[p2] ? p1 : p2;
			}
	}

	int print (int p, int L, int R, int x, int y) {

		if(x<=L && y>=R) return segmentTree[p];
		if(y<L || x>R) return -1;
		int mid = (L+R)/2;
		int p1, p2;
		p1 = print(right(p), mid+1, R, x, y);
		p2 = print(left(p), L, mid, x, y);
		if(p1==-1) return p2;
		if(p2==-1) return p1;

		return  A[p1] <= A[p2]? p1 : p2;

	}


	void problem() {
		//segmentTree.assign(n*4,0);
		buildTree(1,0, n-1);
	}

	void printquery(int x, int y) {

		int q = print(1, 0, n-1, x, y);
		pr ("%d\n", A[q]);
	}



int main() {

	//freopen ("in.txt", "r", stdin);
	//freopen ("out.txt", "w", stdout);
	//ios_base::sync_with_stdio(false);cin.tie(0);

	int t;
	scanf ("%d", &t);
	int q;
	for (int i=1; i<=t; i++) {
		sc ("%d %d", &n, &q);

		int x;
	//	vector < int > A;

		for (int j=0; j<n; j++) {
			sc ("%d", &A[j]);

		}
        pr ("Case %d:\n",i);
		 // for (int j=0; j<n; j++) cout << A[j] << " ";
		 // 	cout << endl;

		problem();
		int y;
		for (int j=1; j<=q; j++) {
			sc ("%d %d", &x, &y);
			printquery(x-1,y-1);
		}

	}



	return 0;
}
