#include<bits/stdc++.h>

using namespace std;

int main() {

 //   freopen ( "in.txt", "r", stdin );

    int t;

    cin >> t;

    for (int i=1;i<=t;i++) {

        int a;

        cin >> a;

        long b[a],c[a];

        long leftM=LONG_MIN,leftC=0,index=0,p=0;

        for (int j=0;j<a;j++) {

            cin >> b[j] >> c[j];



            if (b[j]==leftM){
                leftC++;
            }
            if(b[j]>leftM) {

                leftM=b[j];
                index=j;
                leftC=1;
            }

        }
        if(leftC>1)
            cout << "-1" << endl;
        else {

            for (int j=0;j<a;j++) {

                if(j!=index) {

                    if(leftM<=c[j]){
                        p=1;
                        break;
                    }

                }

            }

            if(p==1)
                cout << "-1" << endl;
            else
                cout << index+1 << endl;

        }



    }


    return 0;
}
