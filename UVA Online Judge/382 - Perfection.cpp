#include<cstdio>

using namespace std;

int digit(int a){

    int c=0;

    while(a!=0){
        a/=10;
        c++;
    }

    return c;


}


int main() {

   // freopen ("in.txt", "r", stdin );

    int n;
    printf("PERFECTION OUTPUT\n");
    while (scanf("%d",&n)==1) {

        if(n==0)
            break;

        int sum=0;

        for (int i=1;i<=n/2;i++){

            if(n%i==0)
                sum+=i;
        }



        int x=5;

        int d=digit(n);
        //printf("%d\n",d);

        int e=x-d;

        for (int i=0;i<e;i++)
            printf(" ");

        printf("%d  ",n);

        if(sum==n)
            printf("PERFECT\n");
        else if(sum<n)
            printf("DEFICIENT\n");
        else
            printf("ABUNDANT\n");




    }
    printf ("END OF OUTPUT\n");

    return 0;
}
