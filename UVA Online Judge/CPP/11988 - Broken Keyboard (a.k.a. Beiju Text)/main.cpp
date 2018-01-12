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


#define sci(a) scanf ("%d",&a)
#define scii(a,b) scanf ("%d %d",&a,&b)
#define sc scanf
#define pb push_back
#define mp make_pair
#define sz(a) a.size()
#define LL long long 
#define L long 

#include <deque>

using namespace std;

int main() { 

//	freopen ("in.txt", "r", stdin);

	string s;
	while (getline(cin,s) && (int)s.size()) {

		list < char > c;
		list < char > :: iterator it;
		it=c.begin();
		
		for (unsigned int j=0; j<s.size(); j++) {
			if(s[j]=='[') it = c.begin();
			if(s[j]==']') it = c.end();
			if(s[j]!=']' && s[j]!='[')
				c.insert(it,s[j]);
		}
		for (it=c.begin(); it!=c.end(); it++)
			printf("%c",*it);
		printf ("\n");
		//cout << endl;

	}
	

	return 0;
}
