#include<cstdio>

using namespace std;


int main()
{

    int n;
    scanf("%d",&n);

    long int a,b;

    for(int i=1;i<=n;i++){

            scanf("%ld %ld",&a,&b);

            if(a>b)
                printf(">\n");
            else if(a<b)
                printf("<\n");
            else
                printf("=\n");


    }

    return 0;
}
