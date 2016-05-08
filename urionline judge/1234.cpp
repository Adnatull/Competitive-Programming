#include<iostream>
#include<stdio.h>
#include<cstring>

using namespace std;

int main()
{
    char m[100],n[100];
    while(gets(m)){
        EOF;
        int l=strlen(m);
        int p=0;
        int i,o;
        for(i=0,o=0;i<l;i++,o++){
            if(islower(m[i]) && p==0){
                printf("%c",toupper(m[i]));
                p=1;
            }
            else if(isupper(m[i]) && p==0){
                printf("%c",m[i]);
                p=1;
            }
            else if(isupper(m[i]) && p==1){
                printf("%c",tolower(m[i]));
                p=0;
            }
            else if(islower(m[i]) && p==1){
                printf("%c",m[i]);
                p=0;
            }
            else
                printf("%c",m[i]);
        }
        printf("\n");

    }
    return 0;
}
