#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>

#define sc scanf
#define pr printf
#define LL long long
#define L long

using namespace std;

int a,b,c;

char d;

char s[1000][1000];

char city[30];
int cot[30];


void dfs (int x, int y) {

    if (x<0 || y<0 || x>=a || y >=b || s[x][y]=='B')
        return;

    if (s[x][y]==d) {

        s[x][y]='B';

        dfs(x-1,y);
        dfs(x,y-1);
        dfs(x,y+1);
        dfs(x+1,y);


    }

    return;


}




int main() {

   // freopen( "in.txt", "r", stdin );

    int t;

    cin >> t;

    d='A';

    for (int i=1;i<=t;i++) {

        cin >> a >> b;
        cin.ignore();

        for (int j=0;j<a;j++) {
                cin >> s[j];

        }

        printf("World #%d\n",i);

        memset(city,0,30);
        memset(cot,0,30);

        int state=0;

        for (int j=0;j<a;j++) {

            for (int k=0;k<b;k++){

                if(s[j][k]!='B'){
                    d=s[j][k];
                int c=0;

                for (int l=0;l<a;l++){
                    for (int m=0; m<b; m++) {

                        if(s[l][m]==d){
                            dfs(l,m);
                            c++;

                        }
                    }
                }
                city[state]=d,
                cot[state]=c;
                state++;

            //    printf ("%c: %d\n",d,c);


                }
            }

        }



        for (int f=0;f<state-1;f++) {

            for (int g=0;g<state-1-f;g++) {
                if(cot[g]<cot[g+1]){
                    swap(cot[g],cot[g+1]);
                    swap(city[g],city[g+1]);
                    }

                if(cot[g]==cot[g+1]){
                    if(city[g]>city[g+1]){
                        swap(city[g],city[g+1]);
                        swap(cot[g],cot[g+1]);
                        }

                }


            }

        }

        for (int f=0;f<state;f++){
            printf ("%c: %d\n",city[f],cot[f]);

        }



    }


    return 0;
}
