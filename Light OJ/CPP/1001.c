#include<stdio.h>
 
int main()
{
    int e,f;
    scanf("%d",&e);
    for(f=1;f<=e;f++){
        int a,b,c;
        scanf("%d",&a);
        b=a/2;
        c=a-b;
        printf("%d %d\n",b,c);
    }
    return 0;
}