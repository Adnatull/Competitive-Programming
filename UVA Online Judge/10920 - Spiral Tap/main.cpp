#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <queue>
#include <algorithm>
#include <cctype>
#include <functional>
#include <iomanip>
#include <string>
#include <climits>
#include <stack>
#include <utility>
#include <cstdlib>
#include <map>


#define LL long long 
#define scii(a,b) scanf("%d %d", &a,&b)
#define pl printf("\n")
#define sci(a) scanf ("%d", &a)

using namespace std;

int main() { 
	
	int a,b;
	while(scii(a,b) && a && b) {
		int half = a/2;
		int x = ceil((double)sqrt(b));
		if(x%2==0) x++;
		int end = half+ceil((double)x/2);
		

		int kombe = x-1;
		int acc =  x*x;
		bool found = false;
		
		int p =end , q = end;
		if(acc-kombe>b) { 
			acc = acc-kombe;
			p = p, q = q-kombe;			
		}
		else { 
			found = true;
			q = q-(acc-b);
		}

		if(acc-kombe>b && !found) { 
			acc = acc-kombe;
			p=p-kombe,q = q;
		} else if(!found) { 
			found = true;
			p = p-(acc-b);
		}

		if(acc-kombe>b && !found) { 
			acc = acc-kombe;
			p = p, q = q+kombe;
			
		}
		else if (!found) { 
			found = true;
			q = q+(acc-b);
		}

		if(!found) { 
			found = true;
			p = p+(acc-b);
		}
		printf ("Line = %d, column = %d.\n",q,p);
	
		
		
		
	}
	
	
	return 0;
}
