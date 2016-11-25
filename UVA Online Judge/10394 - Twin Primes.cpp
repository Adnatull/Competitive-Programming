#include<cstdio>
#include<iostream>
#include<cmath>

#define LL long long
#define L long

using namespace std;

L prime[22345678],mark[22345678],m;


void pr() {

    for(L i=4;i<22345678;i+=2)
        mark[i]=1;


    m=0;

    prime[m++]=2;

    L x=sqrt(22345678)+1;

    for (L i=3;i<=x;i++){

        if(!mark[i]){

            for (L j=i*i;j<22345678;j+=i*2) {

                mark[j]=1;

            }

        }

    }

    for (L i=3;i<22345678;i++)
        if(!mark[i])
            prime[m++]=i;



    return;

}

bool checkprime(L x) {

    L left = 0, right = m-1, mid;

    while (left <= right ) {

        mid = (left + right) /2;

        if (prime[mid]==x)
            return true;
        else if (prime[mid]>x)
            right = mid -1;
        else
            left = mid +1;

    }
    return false;


}
L arr[12345678];

int main() {

    pr();


    for (L i=1,j=0; j<m;j++){

        if(checkprime(prime[j]+2)){
            arr[i]=prime[j];
            i++;
            }

    }

    L n;

    while (scanf("%ld",&n)==1) {

        printf("(%ld, %ld)\n",arr[n],arr[n]+2);

    }


    return 0;
}
