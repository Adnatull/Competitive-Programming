#include<cstdio>
#include<iostream>
#include<cmath>
#include<cctype>
#include<iomanip>

#define LL long long
#define L long

using namespace std;

int main(){
    //freopen ( "in.txt", "r", stdin );

    double p,q,r,s,t,u;

    double x=0,low,mid,high,l,y;

    while(scanf("%lf %lf %lf %lf %lf %lf",&p,&q,&r,&s,&t,&u)==6){

        low = 0, high = 1, l = 0;

        while(high-low>.0000000000001){
            mid = (low+high) / 2;

            y=p*exp(-mid)+q*sin(mid)+r*cos(mid)+s*tan(mid)+t*(mid*mid)+u;
           // printf("%.10lf\n",mid);

            if(y>(-.000001) && y<.000001){
                l = 1;
                printf("%.4lf\n",mid);
               // cout << fixed << setprecision(4) << mid << endl;
                break;
            }
            else if(y>0)
                low = mid;
            else if( y<0 )
                high = mid;


        }

        if ( l == 0 )
            printf("No solution\n");
           // cout << "No solution" << endl;



    }

    return 0;
}
