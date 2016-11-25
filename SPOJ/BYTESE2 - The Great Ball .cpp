#include<bits/stdc++.h>

using namespace std;

long b[110],c[110];
long a;

bool checkin(long x) {

    long st=0,en=a-1,mid;

    while (st<=en) {

        mid = (st+en)/2;

        if(b[mid]==x) {
          //   cout << "in = " << mid << endl;
            return true;
            }

        else if(b[mid]>x)
            en = mid-1;
        else
            st = mid + 1;

    }
    return false;
}

bool checkout(long x) {

    long st=0,en=a-1,mid;

    //cout << "Hello" << endl;

    while (st<=en) {

        mid = (st+en)/2;

        if(c[mid]==x){
             //   cout << "out = " << mid << endl;
            return true;
            }

        else if(x>c[mid])
            st = mid+1;
        else
            en = mid - 1;

    }
    return false;
}


int main() {

  //  freopen("in.txt","r",stdin);

    int t;

    cin >> t;

    while (t--) {

        cin >> a;
        long mi=LONG_MAX, ma=LONG_MIN;

        for (long j=0;j<a;j++) {

            cin >> b[j] >> c[j];

            if(b[j]<mi)
                mi=b[j];

            if(c[j]>ma)
                ma=c[j];
        }
        sort(b,b+a);
        sort(c,c+a);
        long co=0;

   /*     for (int j=0;j<a;j++)
            cout << b[j] << " ";
            cout << endl;
        for (int j=0;j<a;j++)
            cout << c[j] << " ";
            cout << endl;
*/

//cout << mi << " " << ma << endl;

        long macx[ma-mi+1]={0};

       long p=0;
        long xo=0;
        for (long j=mi;j<=ma;j++) {
            if(checkin(j))
                    co++;

            if(checkout(j)){
                co--;


            }
            macx[p++]=co;
           // cout << co << " ";
            if(xo<co)
                xo=co;
        }
       // cout << endl;
        cout << xo << endl;


    }

    return 0;
}
