#include<iostream>
#include<stdio.h>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
    int test,l,p,k,i;
    char a[1010],b[1010];
    scanf("%d",&test);
    while(test--){
            scanf("%s %s",a,b);
            l=strlen(a);
            p=strlen(b);
            reverse(a,a+l);
            reverse(b,b+p);
            k=0;
            for(i=0;i<p;i++){
                if(a[i]!=b[i]){
                    k=1;
                    break;
                    }
            }
            if(k==0)
                printf("encaixa\n");
            else
                printf("nao encaixa\n");
    }
    return 0;
}
