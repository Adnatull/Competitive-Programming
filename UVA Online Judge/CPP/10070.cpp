#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>

#define LL long long
#define L long

using namespace std;


bool mod (char s[], int a){

	int m=0;

	//int l=strlen(s);

	for(int i=0;s[i]!='\0';i++){

		m=m*10+s[i]-48;
		m=m%a;
	}
	if(m==0)
		return true;
	else
		return false;


}

int main(){

	//freopen ( "in.txt", "r", stdin);

	int a,p,q,i=0;
	char s[1000];
	while(cin >> s){
		if(i>0)
			cout << endl;
		p=0,q=0;
		if(((mod(s,4) && !mod(s,100)) || mod(s,400))){
			p=1,q=1;
			cout << "This is leap year." << endl;
		}
		if(mod(s,15)){
			p=1;
			cout << "This is huluculu festival year." << endl;
		}
		if(((mod(s,4) && !mod(s,100)) || mod(s,400)) && mod(s,55)){
			p=1;
			cout << "This is bulukulu festival year." << endl;
		}
		if(p==0)
			cout << "This is an ordinary year." << endl;
		//cout << endl;

		i++;

	}

	return 0;
}