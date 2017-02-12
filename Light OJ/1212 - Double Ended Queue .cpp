#include <bits/stdc++.h>

using namespace std;

int main() { 
	
	int t;
	scanf ("%d",&t);
	int n,m;
	string s;
	for (int i=1; i<=t; i++) { 
		printf ("Case %d:\n",i);
		scanf ("%d %d",&n,&m);
		vector < int > q;
		
		int x;
		for (int j=1;j<=m;j++) { 
			cin >> s;
			if(s=="pushRight") {
				scanf ("%d",&x);
				if(q.size()<n) { 
					q.push_back(x);
					printf ("Pushed in right: %d\n",x);
				}
				else
					printf ("The queue is full\n");
			}
			else if (s=="pushLeft") { 
				scanf ("%d",&x);
				if(q.size()<n) { 
					q.insert(q.begin(),x);
					printf ("Pushed in left: %d\n",x);
				}
				else
					printf ("The queue is full\n");
			}
			else if (s=="popLeft") { 
				if(q.size()==0)
					printf ("The queue is empty\n");
				else { 
					printf ("Popped from left: ");
					cout << q[0] << endl;
					q.erase(q.begin());
					
				}
				
			}
			else if(s=="popRight" ) { 
				if(q.size()==0)
					printf ("The queue is empty\n");
				else { 
					printf ("Popped from right: ");
					cout << q[q.size()-1] << endl;
					q.pop_back();
					
				}
				
			}
		}
		
	}
	
	return 0;
}
