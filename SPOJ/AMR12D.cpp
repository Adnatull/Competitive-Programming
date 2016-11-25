#include<bits/stdc++.h>

using namespace std;

int main() {

	//freopen("in.txt","r",stdin);

	int t;

	scanf("%d",&t);

	string s;
	string x;

	for (int i=1;i<=t;i++) {

		cin >> s;

		x=s;
		reverse(x.begin(),x.end());

		if(s==x)
			printf("YES\n");
		else
			printf("NO\n");


	}

	return 0;
}