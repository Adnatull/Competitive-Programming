#include<stdio.h>
int main()
{
    int t,a[5],i,j=0;
    scanf("%d",&t);
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
        if(a[i]==t){
            j++;
        }
    }
    printf("%d\n",j);
    return 0;
}
