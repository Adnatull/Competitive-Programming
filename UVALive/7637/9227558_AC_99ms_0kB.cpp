#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>


using namespace std;


int main() { 
	
	//freopen ("in.txt", "r", stdin);
	
	int t; scanf ("%d", &t);
	
	for (int i=1; i<=t; i++) { 
			int n; scanf ("%d", &n);
			
			bool flag = true;
			int a[n],b[n+5];
			memset(b,0,sizeof b);
			for (int j=0; j<n; j++) {
				scanf ("%d", &a[j]);
                                if(a[j]<0 || a[j]>=n) flag =false; 
                                  else
				b[a[j]]++;
				
				
			}
			
			if(n%2!=0 || b[0]==0) flag = false;

			
			printf ("Case %d: ",i);
			if(!flag) printf ("invalid\n");
			else { 
				string s = "";
				int sum1=0, sum2=0, pos = 0,j=0;
				flag = true;
				for (j=0; j<n; j++) { 
				
					if(b[pos+1]!=0) { 
						sum1++;
						s.insert(s.end(), '(');
						
						pos++;
						b[pos]--;
						
					}
					else if (pos-1>=0 && b[pos-1]!=0) { 
						pos--;
						s.insert(s.end(), ')');
						sum2++;
						b[pos]--;
					} else{
						flag =false;
							break;
					}
					
				
				}
		

				if(!flag || sum1!=sum2) printf ("invalid\n");
				else cout << s << endl;
			}
				
	}

	return 0;
}