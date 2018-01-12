#include<cstdio>
#include<iostream>
#include<cmath>

#define LL long long
#define L long

using namespace std;

int prime[1234567],mark[12345678],m;


void pr() {

    for(int i=4;i<12345678;i+=2)
        mark[i]=1;


    m=0;

    prime[m++]=2;

    int x=sqrt(12345678)+1;

    for (int i=3;i<=x;i++){

        if(!mark[i]){

            for (int j=i*i;j<12345678;j+=i*2) {

                mark[j]=1;

            }

        }

    }

    for (int i=3;i<12345678;i++)
        if(!mark[i])
            prime[m++]=i;



    return;

}


bool checkprime(int a){

    int left =0, right =m-1, mid;

    while (left<=right) {

        mid = (left+right)/2;

        if(prime[mid]==a)
            return true;
        else if(prime[mid]>a)
            right=mid -1;
        else
            left = mid + 1;


    }
    return false;



}

int main() {

    pr ();


    int n;

    while (cin >> n){

        if(n==0)
            break;

        int c=0;

        if(checkprime(n))
            c++;

        for (int i=0;prime[i]<n;i++){
            int sum=0;
            for (int j=i;prime[j]<n;j++){
                sum+=prime[j];
                if(sum==n){
                    c++;
                    sum=0;
                    break;
                }
            }
        }
        cout << c << endl;


    }

    return 0;
}
