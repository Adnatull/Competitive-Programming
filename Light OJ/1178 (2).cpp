#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#include<algorithm>

typedef long long LL;
typedef long L;

using namespace std;

double area ( double a, double b, double c, double d){

    if(c>a)
        swap(a,c);

    double base, triangle,rectangle,trapizium,s,h;

    base = a-c;

    s = (base + d + b)/2;

    triangle =  sqrt( s*( s-base )*( s-d )*( s-b) );



    h = (triangle*2)/base;

    rectangle = h*c;

    //cout << rectangle << endl;

    trapizium = rectangle+triangle;

    //cout << trapizium << endl;

    return trapizium;


    }

int main(){

    //freopen("in.txt", "r", stdin);


    double a,b,c,d;

    int n;

    cin >> n;

    for ( int i=1; i<=n; i++){

        cin >> a >> b >> c >> d;

        cout << "Case " << i << ": " ;

        //double bo=area

        cout <<  setprecision(11) << area(a,b,c,d) << endl;


        }


    return 0;
}
