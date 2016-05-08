#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

int main(){

    int t,i,j;
    while(1){
        scanf("%d%*c",&t);

        if(t==0)
            break;

        char a[t][25];
        for(i=0;i<t;i++)
            gets(a[i]);

        int b[t];
        for(i=0;i<t;i++)
            b[i]=0;

        for(i=0;i<t;i++){
            for(j=0;j<25;j++){
                if(a[i][j]!='X')
                    b[i]++;
            }
        }

        sort(b,b+t);
        int x=b[0];
        for(i=0;i<t;i++)
            b[i]=b[i]-x;

        int sum=0;
        for(i=0;i<t;i++)
            sum=sum+b[i];

        printf("%d\n",sum);


    }

    return 0;
}
