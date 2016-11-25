#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<climits>

#define sc scanf
#define pr printf
#define LL long long
#define L long

using namespace std;

int a,b,c,d;

char s[30][30];

char m,n;



void fill (int x, int y) {

	if(y<0)
		y=b-1;
	if(y==b)
		y==0;

	if(x<0 || x>=a || s[x][y]!=m)
		return;

	if (s[x][y]==m) {
		
		c++;

		s[x][y]=n;

		fill (x-1,y);

		fill (x,y-1);

		fill (x,y+1);

		fill (x+1,y);

	}

	return ;



}

int main() {

	//freopen ( "in.txt", "r", stdin );

	int x,y;

	while (cin >> a >> b) {

		cin.ignore();

		for (int i=0;i<a;i++)
			cin >> s[i];


		cin >> x >> y;

		m = s[x][y];

		n = m+1;

		c=0;

		fill(x,y);

		d=0;

		for (int i=0; i<a; i++ ) {

			for (int j=0; j<b; j++ ) {

				if(s[i][j]==m){

					c=0;

					fill (i,j);

					d= max(d,c);

				}


			}

		}

		cout << d << endl;


	}

	return 0;
}