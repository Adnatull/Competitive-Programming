#include<iostream>
#include<stdio.h>
#include<cstring>

using namespace std;

int main()
{
    char a[100],b[100];
    int l,p,i,j,k,n,c,maxc;
    while(scanf(" %[^\n] %[^\n]",a,b)==2){
        l=strlen(a);
        p=strlen(b);
        maxc=0;
        for(i=0;i<l;i++){

            for(j=0;j<p;j++){
                if(a[i]==b[j]){
                    c=0;
                    for(k=i,n=j;k<l,n<p;k++,n++){
                        if(a[k]!=b[n])
                            break;
                        c++;
                    }
                if(maxc<c)
                    maxc=c;
                }
            }
        }
        cout << maxc << endl;
    }
    return 0;
}
