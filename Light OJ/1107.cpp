#include<iostream>

using namespace std;

int main()
{
    int test;
    cin >> test;
    for(int i=1;i<=test;i++){

        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int num;
        cin >> num;
        int ar[num];
        cout << "Case " << i << ":" << endl;
        for(int j=0;j<num;j++){
            int x3,y3;
            cin >> x3 >> y3;
            if(x3>x1 && x3<x2 && y3>y1 && y3<y2)
                cout << "Yes" << endl;
                //ar[j]=0;
            else
                cout << "No" << endl;
                //ar[j]=1;
        }

       /* for(int j=0;j<num;j++){
            if(ar[j]==0)
                cout << "Yes" << endl;
            else
                 cout << "No" << endl;
        } */
    }
    return 0;
}
