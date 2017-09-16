#include <bits/stdc++.h>

using namespace std;

int main() { 
	
	int n,x;
	scanf ("%d %d", &n, &x);
	
	int a[n];
	for (int i=0; i<n; i++) scanf ("%d", &a[i]);
	
	//Searching for upperbound
	
	int left = 0, right = n-1, mid;
	
	/*
	 * 5 6
	 * 1 2 3 5 8
	 * */
	
	while (left<=right) { 
		mid = (left+right)/2;
		if(a[mid]<x) left = mid + 1;
		else right = mid - 1;
		}
		
	printf ("%d\n", left+1);
	
	
	return 0;
}
