#include <bits/stdc++.h>
#include<tuple>

using namespace std;
vector < tuple < double, double, double >  > lst;
int n;

void run(int index, double sum, double total, vector < double> final_list) {

    if(index==n || final_list.size()==n) {
        if(sum==total) {
            cout << "found answer " <<sum <<  endl;
            for (int i=0; i<final_list.size(); i++) {
                cout << final_list[i] << endl;
            }
        }
        return;
    }
    if(sum>total) {
        return;
    }
    double rate = get<0>(lst[index]);
    double left = get<1>(lst[index]), right = get<2>(lst[index]);


    for (double i = left; i<=right; i+= 0.001) {
        final_list.push_back(i);
        double pp = round(i*rate*1000);

        long int zz = pp;
        pp = (double) zz/1000;
       // cout << pp << endl;

        run(index+1,sum+pp, total, final_list);
        final_list.pop_back();
    }

    return;

}

int main() {

    freopen ("in.txt", "r", stdin);


    scanf ("%d", &n);
    double total;
    scanf ("%lf", &total);

    tuple < double, double, double > rate;




    double x,y,z;
    for (int i=0; i<n; i++) {
        scanf ("%lf %lf %lf", &x, &y, &z);
        int zz = round(x*1000);
        x = (double) zz/1000;

        zz = round(y*1000);
        y = (double) zz/1000;

        zz = round(z*1000);
        z = (double) zz/1000;

        rate = make_tuple(x,y,z);
        lst.push_back(rate);
    }

    for (int i=0; i<lst.size(); i++) {
        cout << get<0>(lst[i]) << " " << get<1>(lst[i]) << " " << get<2>(lst[i]) << endl;
    }
    vector < double > final_list;
    run(0,(double)0, total, final_list);


    return 0;
}
