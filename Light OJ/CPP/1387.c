#include <stdio.h>
 
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;++i){
        printf("Case %d:\n", i);
        int n, j, sum=0;
        scanf("%d",&n);
        for(j=1;j<=n;++j){
            char a[10];
            scanf("%s",a);
            int value;
            if(strcmp(a,"donate")==0){
                scanf("%d",&value);
                sum=sum+value;
            }
            else{
                printf("%d\n",sum);
            }
        }
    }
}