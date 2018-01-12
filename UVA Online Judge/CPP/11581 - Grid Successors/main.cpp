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


#define LL long long 
#define scii(a,b) scanf("%d %d", &a,&b)
#define pl printf("\n")
#define sci(a) scanf ("%d", &a)

using namespace std;
int main(){
	
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int t;
	sci(t);
	cin.ignore();
	for (int i=1; i<=t; i++) { 
		
		char s[4][4], p[4][4];
		for (int j=0; j<3; j++) scanf ("%s", s[j]);
		int cnt = -1;
		for (;;cnt++) { 
			
			bool found = true;
			for (int j=0; j<3 ; j++) { 
				for (int k=0; k<3; k++) { 
					if(s[j][k]=='1') { 
						

						found = false;

					}
				}

			}

			if(found) break;
			
			
			
			for(int j=0; j<3; j++) { 
				for (int k=0; k<3; k++) { 
					int sum = 0;
					int x , y;
				
					
					x = j-1, y = k;
					if(x>=0 && x<3 && y>=0 && y<3) { 
						sum += s[x][y]-48;
					}
					
			
					
					x = j, y = k-1;
					if(x>=0 && x<3 && y>=0 && y<3) { 
						sum += s[x][y]-48;
					}
					
					x = j, y = k+1;
					if(x>=0 && x<3 && y>=0 && y<3) { 
						sum += s[x][y]-48;
					}
					
				
					x = j+1, y = k;
					if(x>=0 && x<3 && y>=0 && y<3) { 
						sum += s[x][y]-48;
					}
					
				
					
					p[j][k] = (sum%2)+48;
					
				}
			}
			for (int j=0; j<3; j++) for (int k=0; k<3; k++) s[j][k] = p[j][k];
		
			
		}
		cout << cnt << endl;
		
		
	}

	
	
	
	return 0;
}

