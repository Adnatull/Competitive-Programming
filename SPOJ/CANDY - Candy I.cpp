#include<bits/stdc++.h>

using namespace std;

int main() {

   // freopen("in.txt","r",stdin);


    int t;

    while (cin >> t) {
        if(t==-1)
            break;

        int arr[t];
        int sum=0;
        for (int i=0;i<t;i++) {

            cin >> arr[i];
            sum+=arr[i];
        }
        int avg=sum/t;

        int val=0;

        for (int i=0;i<t;i++){
            if(avg>arr[i]){
                val+=avg-arr[i];
            }
        }
        if(sum==avg*t)
            cout << val << endl;
        else
            cout << "-1" << endl;

    }

    return 0;
}
