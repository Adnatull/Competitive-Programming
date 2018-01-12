#include<cstdio>
#include<iostream>
#include<cmath>

#define LL long long
#define L long

using namespace std;

int prime[1234567],mark[12345678],k;

void boka(){

	k=0;
	prime[k++]=2;
	mark[1]=1;

	int c=sqrt(12345678)+1;

	for(int i=4;i<12345678;i+=2)
		mark[i]=1;

	for(int i=3;i<c;i+=2){

		if(!mark[i]){


			for(int j=i*i;j<12345678;j+=i*2){

				mark[j]=1;

			}
		}

	}

	for(int j=3;j<12345678;j++){

		if(!mark[j])
			prime[k++]=j;

	}

	//cout << prime[100000] << endl;

}

bool checkprime(int n){


	int lo=0,hi=k-1,mid;

	while(lo<=hi){

		mid=(lo+hi)/2;

		if(prime[mid]==n)
			return true;
		else if(prime[mid]<n)
			lo=mid+1;
		else
			hi=mid-1;

	}
	return false;

}


bool emirp(int n){

	int r=0,p=n;

	while(n!=0){

		r=r*10+n%10;
		n=n/10;

	}

	if(r==p)
		return false;

	if(checkprime(r))
		return true;
	else
		return false;


}


int main(){

	boka();

	//freopen ( "in.txt", "r", stdin );

	int n;

	while ( cin >> n ){
		cout << n ;
		if(checkprime(n)){
			if(emirp(n))
				cout << " is emirp." << endl;
			else
				cout << " is prime." << endl;
		}
		else cout << " is not prime." << endl;



	}

	return 0;
}