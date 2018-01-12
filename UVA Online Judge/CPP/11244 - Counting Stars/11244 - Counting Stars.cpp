#include<bits/stdc++.h>

using namespace std;

int a, b,c,d;

char sky[103][103];


void checkstar(int x, int y){

    if(x<0 || y<0 || x>=a || y>=b || sky[x][y]!='*')
        return;

    if(sky[x][y]=='*')
        d++;
    sky[x][y]='.';
    checkstar(x-1,y-1);
    checkstar(x-1,y);
    checkstar(x-1,y+1);
    checkstar(x,y-1);
    checkstar(x,y+1);
    checkstar(x+1,y-1);
    checkstar(x+1,y);
    checkstar(x+1,y+1);

    return;
}

void ffill (int x, int y){

    if(x<0 || y<0 || x>=a || y>=b || sky[x][y]=='0')
        return;

    if(sky[x][y]=='*'){

        d=0;
        checkstar(x,y);
        if(d==1)
            c++;
    }

    sky[x][y]='0';

    ffill(x-1,y-1);
    ffill(x-1,y);
    ffill(x-1,y+1);
    ffill(x,y-1);
    ffill(x,y+1);
    ffill(x+1,y-1);
    ffill(x+1,y);
    ffill(x+1,y+1);
    return;

}

int main() {

   // freopen("in.txt", "r", stdin);

    while (cin >> a >> b){

        cin.ignore();

        if(a==0 && b==0)
            break;


        for (int i=0;i<a;i++)
            cin >> sky[i];
        c=0;



        ffill(0,0);

        cout << c << endl;

    }


    return 0;
}
