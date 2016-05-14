#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    char s[110][110];
    int i,j,k;
    int l[110];
    for(i=0;gets(s[i]);i++){
        l[i]=strlen(s[i]);
    }
    for(k=0;k<l[j];k++){
        for(j=i-1;j>=0;j--){
            printf("%c",s[j][k]);
            }
        printf("\n");
    }
    return 0;
}
