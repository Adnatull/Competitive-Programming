#include <stdio.h>
 
int main()
{
    int d,e;
    scanf("%d",&d);
    for(e=1;e<=d;e++){
        int a,b;
        scanf("%d %d",&a,&b);
        printf("Case %d: %d\n",e,a+b);
    }
    return 0;
}