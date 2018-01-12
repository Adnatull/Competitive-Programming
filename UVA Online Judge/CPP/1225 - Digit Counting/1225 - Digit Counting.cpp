#include<cstdio>
#include<iostream>
#include<cstring>

using namespace std;

int arr[10];


void digit (int a) {

    int r=0;
    while(a!=0){
        r=a%10;

        arr[r]++;
        a/=10;

    }
    return;
}

int main() {


    int t;

    scanf("%d",&t);

    int n;

    for (int i=1;i<=t;i++){

        scanf("%d",&n);

        memset(arr,0,sizeof(arr));

        for (int j=1;j<=n;j++){

            digit(j);

        }

        for (int j=0;j<10;j++){

            if(j>0)
                printf(" ");
            printf("%d",arr[j]);

        }
        printf("\n");


    }


    return 0;
}
