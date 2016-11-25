#include<bits/stdc++.h>

using namespace std;


struct hot {

    int price;
    int w[20];

    bool stts ;

    long sum ;

};

int main() {

  //  freopen ("in.txt", "r", stdin);

    int a,b,c,d;

    while (cin >> a >> b >> c >> d) {


        struct hot hotels[c];

        for (int i=0;i<c;i++) {
            hotels[i].stts = false;
            hotels[i].sum = 0;
        }

        for (int i=0;i<c;i++){

            cin >> hotels[i].price;
            for (int j=0; j<d;j++)
                cin >> hotels[i].w[j];
        }

        for (int i=0;i<c;i++){

             hotels[i].sum = hotels[i].price * a;
            for (int j=0; j<d;j++){
                if(hotels[i].w[j]>a){
                //    cout << "Hell" << endl;
                    hotels[i].stts=true;
                    break;
                }

            }
        }

        long sum[100]={0};
        int p=0;

        for (int i=0;i<c;i++){
            if(hotels[i].stts==true && hotels[i].sum<=b){
                    sum[p++]=hotels[i].sum;
            }
        }

        if(p==0 )
            cout << "stay home" << endl;
        else{
            sort (sum,sum+p);
            cout << sum[0] << endl;
            }





    }

    return 0;
}
