#include<stdio.h>
#include<cstring>

using namespace std;

int main()
{
    int test;
    char a[100];
    scanf("%d",&test);
    for(int x=1;x<=test;x++){
        scanf("%*c%[^\n]",a);
        int l=strlen(a);
        int i;
        for(i=(l/2)-1;i>=0;i--)
            printf("%c",a[i]);
        for(i=l-1;i>=l/2;i--)
            printf("%c",a[i]);
        printf("\n");
    }
    return 0;
}
