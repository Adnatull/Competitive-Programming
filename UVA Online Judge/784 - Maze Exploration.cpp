#include<cstdio>
#include<iostream>
#include<cstring>

#define LL long long
#define L long
#define sc scanf
#define pr printf

using namespace std;

char s[35][100];

int a;


void dfs (int x, int y) {

	//int l=strlen(s[x]);

	//if(y<0 || y>=l)
	//	return;

	if (x>=a || x<0)
		return;

	if(s[x][y]!=' ' && s[x][y]!='*' )
		return;

	if(s[x][y]==' ' || s[x][y]=='*'){
		s[x][y]='#';

		dfs(x-1,y);

		dfs (x,y-1);

		dfs (x,y+1);

		dfs (x+1,y);


	}

	return;


}

int main() {

	//freopen( "in.txt", "r", stdin );

	int n;

	cin >> n;

	cin.ignore();
	for (int i=1; i<=n; i++ ) {




		for (a=0;;a++){
			gets(s[a]);

			if(s[a][0]=='_')
				break;
		}

		/*for (int j=0;j<=a;j++){
            cout << s[j] << endl;

		}*/

		int x=0;
		for (int j=0;j<=a;j++){

			for (int k=0;s[j][k]!='\0';k++) {

				if(s[j][k]=='*'){
					dfs(j,k);
					x=1;
					break;
				}

			}

			if(x==1)
				break;

		}

		for (int j=0;j<=a;j++)
			cout << s[j] << endl;
			




	}

	return 0;
}
