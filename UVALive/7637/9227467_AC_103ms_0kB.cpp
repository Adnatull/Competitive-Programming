#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>


using namespace std;


 int b[1000000+10];

int main() { 
	
	//freopen ("in.txt", "r", stdin);
	
	int t; scanf ("%d", &t);
	
	for (int i=1; i<=t; i++) { 
			int n,m; scanf ("%d", &n);
			
			bool flag = true;
			//int a[n],b[n+10];
			memset(b,0,sizeof b);
			for (int j=0; j<n; j++) {
				scanf ("%d", &m);
				if(m<0 || m>=n) flag =false;
				else
					b[m]++;
				
				
			}
			
			if(n%2!=0) flag = false;
			if(b[0]==0) flag = false;
			printf ("Case %d: ",i);
			if(!flag) printf ("invalid\n");
			else { 
				string s = "";
				int sum1=0, sum2=0, pos = 0,j=0;
				flag = true;
				for (j=0; j<n; j++) { 
				
					if(b[pos+1]!=0 ) { 
						sum1++;
						s.insert(s.end(), '(');
						
						pos++;
						b[pos]--;
						
					}
					else  { 
						pos--;
						s.insert(s.end(), ')');
						sum2++;
						b[pos]--;
					} 
					
				
				}
		

				if( sum1!=sum2) printf ("invalid\n");
				else cout << s << endl;
			}
				
	}

	return 0;
}
