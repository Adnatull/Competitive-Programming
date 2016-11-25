#include<cstdio>
#include<cstring>
#include<cctype>

using namespace std;

int main(){

    int n;
    scanf("%d",&n);

    char s[100],s1[100];

    int i,j,k;

    while(n--){

        scanf(" %[^\n]",s);

        for(i=0,j=0;s[i]!='\0';i++){
            if(isalpha(s[i]) && !isalpha(s[i-1])){
                s1[j]=s[i];
                //printf("%c");
                j++;
            }
        }
        s1[j]='\0';

        printf("%s\n",s1);

    }

    return 0;
}
