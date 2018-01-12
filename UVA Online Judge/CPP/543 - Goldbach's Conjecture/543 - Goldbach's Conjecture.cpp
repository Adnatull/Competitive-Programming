#include<cstdio>
#include<iostream>
#include<cmath>

#define LL long long
#define L long

int prime[1234567],mark[12345678],m;

int a;
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

bool checkprime(int x) {

    int left = 0, right = m-1, mid;

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

int main() {

    pr ();

    while (scanf("%d",&a)==1){

        if (a==0)
            break;

        int c=0,x;

        for (int i=0;i<m;i++){

            x=a-prime[i];

            if (checkprime(x)){

                printf("%d = %d + %d\n",a,prime[i],x);
                c=1;
                break;
            }
        }


    }

    return 0;
}
