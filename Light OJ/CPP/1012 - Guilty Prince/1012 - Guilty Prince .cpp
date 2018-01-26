#include<iostream>
#include<cstring>
#include<cstdio>

#define LL long long
#define L long
#define sc scanf
#define pr printf

using namespace std;

int a,b,c;

char s[25][25];

void dfs (int x, int y) {

    if(x<0 || y<0 || x>=a || y>=b || s[x][y]=='#')
        return;

    if(s[x][y]=='.' || s[x][y]=='@'){

        c++;
        s[x][y]='#';

        dfs (x-1,y);
        dfs (x,y-1);
        dfs (x,y+1);
        dfs (x+1,y);
    }
    return;
}

int main() {

    //freopen("in.txt","r",stdin);

    int n;

    sc ("%d",&n);

    for (int i=1;i<=n;i++) {

        sc ("%d %d%*c",&b,&a);

        for (int j=0;j<a;j++)
            sc("%s",&s[j]);

        int p=0;
        c=0;
        for (int j=0;j<a;j++) {
            for (int k=0;k<b;k++) {

                if( s[j][k]=='@'){
                    c=0;
                    dfs(j,k);
                    p=1;
                    break;
                }
            }
            if(p==1)
                break;
        }

        pr ("Case %d: %d\n",i,c);

    }



    return 0;
}
