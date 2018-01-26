#include<stdio.h>
#include<cstring>

using namespace std;

int main()
{
    int test;
    scanf("%d ",&test);
    for(int i=1;i<=test;i++){
        unsigned long num;
        scanf("%ld",&num);
        int r,o=0;
        char s[20];
        for(;num>0;num=num/10){
            s[o]=(num%10)+48;
            o++;
        }
        s[o]='\0';
        r=o-1;
        int j;
        //o=(o/2)+1;
        char s2[o];
        for(j=0;j<o;j++){
            s2[j]=s[r];
            r--;
        }
        s2[j]='\0';
        r=0;
        for(j=0;j<o;j++){
            if(s[j]!=s2[j]){
                r=1;
                break;
            }
            }
        if(r==0)
            printf("Case %d: Yes\n",i);
        else if(r==1)
            printf("Case %d: No\n",i);
        }

    return 0;
}
