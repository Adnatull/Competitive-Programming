#include<cstdio>
#include<cstring>

using namespace std;

int main()
{

    int n;

    scanf("%d",&n);

    char s[1010],alpha[]="abcdefghijklmnopqrstuvwxyz";

    int i,j,k;

    while(n--){

        scanf(" %[^\n]",s);

        for(k=0,j=0;alpha[k]!='\0';k++){

            for(i=0;s[i]!='\0';i++){

                if(alpha[k]==s[i]){
                    j++;
                    break;
                }

            }
        }

        if(j==26)
            printf("frase completa\n");
        else if(j>=13 && j<26)
            printf("frase quase completa\n");
        else
            printf("frase mal elaborada\n");

    }

    return 0;
}
