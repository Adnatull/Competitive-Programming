#include<bits/stdc++.h>

using namespace std;

int a,b;

int arr[12][12],temp;

bool ch[12][12];


void dsum (int x, int y) {

    if(x<a || y<a || x>=b || y>=b || ch[x][y])
        return ;

    ch[x][y]=1;
    if(x==a || x==b-1 || y==a || y==b-1)
        temp+=arr[x][y];

    dsum(x-1,y);
    dsum(x,y-1);
    dsum(x,y+1);
    dsum(x+1,y);



}

int main() {

  //  freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    int t,i=1;
    while (cin >> t) {

        if(t==0)
            break;
        cout << "Case " << i << ":";
        i++;

        for (int j=0;j<t;j++){
            for (int k=0;k<t;k++)
                cin >> arr[j][k];
        }



        a=0,b=t;


        vector <int> sum;
        while (a<=b){
            temp=0;
            dsum(a,a);
            sum.push_back(temp);

            memset(ch,0,sizeof(ch));

            a++,b--;
        }
        for (int k=0;k<sum.size();k++){
            if(sum[k]!=0)
                cout << " " << sum[k];
        }
        cout << endl;







    }

    return 0;
}
