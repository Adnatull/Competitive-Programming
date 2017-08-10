/*
 *
 Algorithm: Segment Tree with lazy propagation.
 * */

#include <bits/stdc++.h>

using namespace std;

vector < int > lst;

vector < int > pending;

void flip(int q, int left, int right, int x, int y) { 
	
	if(pending[q] && left!=right) { 
		pending[q*2] +=pending[q];
		pending[(q*2)+1]+=pending[q];
		pending[q] = 0;
	}
	else if(pending[q] && left==right) { 
		lst[left] += pending[q];
		pending[q] = 0;
		lst[left] %=2;		
	}
	
	if(x>right || y<left) return;
	
	if(left>=x && right<=y) { 
			pending[q]++;
			return;
	}
	
	int mid = (left+right)/2;
	
	flip(q*2,left,mid,x,y);
	flip(q*2+1,mid+1, right, x, y); 
	
	return;
}


int query(int p, int left, int right, int x) { 
	
	if(pending[p] && left!=right) { 
		pending[p*2] +=pending[p];
		pending[(p*2)+1]+=pending[p];
		pending[p] = 0;
	}
	else if(pending[p] && left==right) { 
		lst[left] += pending[p];
		pending[p] = 0;
		lst[left] %=2;		
	}
	
	if(left==right) { 
		return lst[left];		
	}
	int mid = (left+right)/2;
	
	if(x>=left && x<=mid) return query(p<<1, left, mid, x);
	else return query( (p<<1)+1, mid+1, right, x);
	
}


int main() { 
	
	//freopen ("in.txt", "r", stdin);
	
	int t;
	scanf ("%d%*c", &t);
	
	string s;
	for (int i=1; i<=t; i++) { 
		
		printf ("Case %d:\n",i);
		cin >> s;
		int l = s.size();
		pending.assign(l*4,0);
		
		for (int j=0; j<l; j++) { 
			int x = s[j]-48;
			lst.push_back(x);			
		}
		
		int Q;
		char c;
		scanf ("%d%*c",&Q);
		for (int j=1; j<=Q; j++) { 
			scanf ("%c",&c);
			int x,y;
			if(c=='I') { 
				scanf ("%d %d ",&x,&y);
				flip(1, 0, l-1, x-1,y-1);
			}
			else if(c=='Q') { 
				scanf ("%d ",&x);
				printf ("%d\n",query(1,0,l-1,x-1));
			}
			
		}
		
		lst.clear();
		pending.clear();
	}
	
	return 0;
}
