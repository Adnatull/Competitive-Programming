#include<iostream>
#include<stdio.h>
#include<cstring>

using namespace std;

int main()
{
    int l,p,i,j,k,m,o,x,y,z;
    char s[100],b[50][100];
    while(gets(s)){
        EOF;
        //puts(s);
        l=strlen(s);
        k=0;
        o=0;
        for(i=0;i<l;i++){
            if(s[i]!=32){
                for(j=i,m=0;;j++,m++){
                    o=1;
                    if(s[j]==32)
                        break;
                    b[k][m]=s[j];
                }
                b[k][m]='\0';
            }
            if(o==1){
            k++;
            i=j;
            }
        }
        o=0;
        p=0;
        y=0;
        for(i=0;i<k;i++){
            m=strlen(b[i]);
            if(b[i][m-1]=='.'){
                b[i][m-1]='\0';
                m=m-1;
                }
           // printf("%s\n",b[i]);
            for(j=0;j<m;j++){
                if((b[i][j]>='A' && b[i][j]<='Z') || (b[i][j]>='a' && b[i][j]<='z'))
                    o=0;
                else{
                    o=1;
                    break;
                }
            }
            if(o==0){
                x=strlen(b[i]);
                y++;
                p+=x;
                }
            }
            if(y==0)
                printf("250\n");
            else if(p/y<=3)
                printf("250\n");
            else if(p/y>=4 && p/y<=5)
                printf("500\n");
            else if(p/y>=6)
                printf("1000\n");
       }
    return 0;
}
