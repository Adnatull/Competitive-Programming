#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<set>

#define LL long long
#define L long
#define sc scanf
#define pr printf

using namespace std;

LL fact (LL a) {

	LL x=1;

	for (int i=1;i<=a;i++)
		x*=i;
	return x;

}

int main() {

	//freopen("in.txt","r",stdin);


	LL a,x;
	char c,s[25];

	int n;
	sc("%d%*c",&n);

	for (int i=1;i<=n;i++) {
		x=0;
		a=1;
		int j=0;




		while (sc("%c",&c)==1) {

			if(c=='\n')
				break;
			x++;
			a*=x;
			s[j++]=c;

		}
		//if(c!='\n')
		//	j++;
		s[j]='\0';
		sort (s,s+j);



		char xp[j];
		int p=0,ma;
		for (int k=0;k<j;k++){
			ma=0;
			for (int l=0;l<k;l++){
				if(s[k]==s[l]){
					ma=1;
					break;
				}
			}
			if(ma==0)
				xp[p++]=s[k];
		}
		xp[p]='\0';



		for (int k=0;k<p;k++){
			x=0;
			for (int l=0;l<j;l++){
				if(xp[k]==s[l])
					x++;
			}
			if(x>1) {
				x=fact(x);

				a=a/x;
			}


		}
		//cout << a <<endl;


		pr ("Data set %d: %lld\n",i,a);
	}

	return 0;
}