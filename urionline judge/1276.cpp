#include<cstdio>
#include<cstring>
#include<cctype>
#include<algorithm>



using namespace std;

int main()
{
    char s[100],s1[100],s2[100],alpha[30]="abcdefghijklmnopqrstuvwxyz";

    int i,j,k,l;

    while(gets(s)){
       for(i=0,k=0,l=0;alpha[i]!='\0';i++){
            for(k=0;s[k]!='\0';k++){
                if(alpha[i]==s[k]){
                    s2[l]=s[k];
                    l++;
                    break;
                }
            }
        }
        s2[l]='\0';
        //puts(s2);

        for(i=0;s2[i]!='\0';i++){

            if(i>0)
                printf(", ");

            printf("%c",s2[i]);

            for(;s2[i]!='\0';i++){
                if(s2[i+1]!=s2[i]+1){
                    printf(":%c",s2[i]);
                    break;
                    }
            }

        }


        printf("\n");
    }


    return 0;
}
