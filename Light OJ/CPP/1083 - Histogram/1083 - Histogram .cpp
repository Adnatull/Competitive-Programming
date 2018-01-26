#include <bits/stdc++.h>

/*
 Problem Link: http://lightoj.com/volume_showproblem.php?problem=1083
 * Algorithm: 
 *  First I built segment tree to keep track of min value in any range. Then I recursively searched for the best solution.
 * For that I first find the location of min value in the array. Multipliyed the value of that index with 
 * the range size(array length initialy). For the left side of that index I did again recursion to find
 * the min value index multiplied the value of that index with the range size and again for right side of that index. 
 * now I have three value, and returned the highest value.
 * 
 * like:
 * 
 * 4
 * 3 2 1 4
 * 
 * min value at index 2(0 indexd array). value of index 2 is 1. lets multiply it with the length of current range and its 1*4=4.
 * lets go for left side of index 2. Here, range is [0,1], min value is 2 at location 1. Multiply it with legnth 2, so 2*2 = 4
 * Again for the ride side of the index 2. range is [3,3] min value is 4 and location is 3. so multiplication is 1*3 = 3
 * so, now max value among above three values is 4. 
 * But we have to do the above process recursively as long as the length of range doesnt become 1. 
 *  
 * */

using namespace std;


class histogram { 
	
	private:
		int length;
	
		vector < int > tree;
		vector < long > arr;
		
		int left(int n) { 
			return n*2;
		}
		
		int right (int n) { 
			return n*2+1;
		}
		
	void buildTree(int p, int l, int r) { 
		if(l==r) { 
			tree[p] = l;
			return;
		} else { 
			int mid = (l+r)/2;
			buildTree(left(p),l,mid);
			buildTree(right(p),mid+1,r);
			int x;
			if(arr[tree[left(p)]]<arr[tree[right(p)]]) x = tree[left(p)];
			else x = tree[right(p)];
			tree[p] = x;			
		}
		
		return;		
	}
	
	int query(int p, int l, int r, int x, int y) { 
		if(x>r || y<l) return -1;
		
		if(l>=x && r<=y) return tree[p];
		
		int mid = (l+r)/2;
		
		int p1 = query(left(p),l, mid,x,y);
		int p2 = query(right(p),mid+1,r,x,y);
		if(p1==-1) return p2;
		if(p2==-1) return p1;
		
		if(arr[p1]<arr[p2]) return p1;
		return p2;
		
	}
	
	long long findHist(int l, int r) { 
			if(l>r) return 0;
			if(l==r) { 
				return (long long) arr[l];
			}
			
			int x = query(1,0,length-1,l,r);
			long long y = (long long) arr[x]*(r-l+1);

			long long b1 = findHist(l,x-1);
			long long b2 = findHist(x+1,r);
			return max(y,max(b1,b2));
		
	}
	
	public:
		histogram (int n) { 
			length = n;
			tree.assign(n*4,0);
			long x;
			for (int i=1; i<=n; i++) {
				scanf ("%ld",&x);
				arr.push_back(x);
			}
			buildTree(1,0,n-1); 
			printf ("%lld\n",findHist(0,n-1));
		}
	
};

int main() { 
	int n;
	int test;
	scanf ("%d", &test);
	for (int i=1; i<=test; i++) {
		
		scanf ("%d", &n);
		printf ("Case %d: ",i);
		
		histogram hist(n);
		
	}
	return 0;
}
