#include<iostream>
#include<stdio.h>
#include<cstring>

using namespace std;

int main()
{
    int test;
    char a[100],b[100],c[100];
    scanf("%d%*c",&test);
    for(int x=1;x<=test;x++){
        scanf(" %[^\n]",a);
        int l=strlen(a);
        int i,j,k;
        if(l%2==0){
        for(i=l/2-1,j=0;i>=0;i--){
            if(isupper(a[i]) || a[i]==32){
            b[j]=a[i];
            j++;
            }
            }
        for(i=l-1;i>=l/2;i--){
            if(isupper(a[i]) || a[i]==32){
            b[j]=a[i];
            j++;
            }
            }
            b[j]='\0';
        /*for(i=j-1;i>=0;i--){
            if(b[i]!=32){
                b[i+1]='\0';
                break;
            }
        }*/
        //int t=0;
        for(i=0;i<j;i++){
            /*if(b[i]==32 && t==0)
                t=0;
            else{
                t=1;
                printf("%c",b[i]);
            }*/
            printf("%c",b[i]);
        }
        }
        else{
            for(i=l/2,j=0;i>=0;i--){
                if(isupper(a[i]) || a[i]==32){
                b[j]=a[i];
                j++;
                }
                }
            for(i=l-1;i>=l/2+1;i--){
                if(isupper(a[i]) || a[i]==32){
                b[j]=a[i];
                j++;
                }
                }
                b[j]='\0';
            /*for(i=j-1;i>=0;i--){
                if(b[i]!=32){
                    b[i+1]='\0';
                    break;
                }
            }*/
            //int t=0;
            for(i=0;i<j;i++){
                /*if(b[i]==32 && t==0)
                    t=0;
                else{
                    t=1;
                    printf("%c",b[i]);
                }*/
                printf("%c",b[i]);
            }
            }

        printf("\n");
    }
    return 0;
}
