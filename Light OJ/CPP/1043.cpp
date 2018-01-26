#include<iomanip>
#include<iostream>
#include<cstdio>
#include<cmath>

#define LL long long

using namespace std;


double findad(double ab,double ac, double bc, double d){

    double low=0;
    double high=ab,ad,db,ec,ae,de,ade,bdec,x,s,vumi,areav,nh,abc;



    while(high-low>.00000000001){



        ad=(high+low)/2;


        db=ab-ad;

        ae=(ad*ac)/ab;

        ec=ac-ae;

        de=(ae*bc)/ac;

        //cout << de << endl;

        s=(ad+de+ae)/2;

        ade=sqrt(s*(s-ae)*(s-de)*(s-ad));//area of triangle
        //cout << ade << endl;

        vumi=bc-de;

        s=(vumi+db+ec)/2;

        areav=sqrt(s*(s-vumi)*(s-db)*(s-ec));

        nh=(areav*2)/vumi;

        bdec=(nh*de)+areav;//area of trapiziuam


        /*s=(ab+bc+ac)/2;

        abc=sqrt(s*(s-ab)*(s-bc)*(s-ac));

        bdec=abc-ade;*/



        x=ade/bdec;
        //printf("%lf\n",x);
        if(x==d)
            break;

        if(x>d)
            high=ad;
        else if(x<d)
            low=ad;


        }

        return ad;




    }



int main(){

    //freopen("in.txt","r",stdin);


    int n;

    cin >> n;

    double a,b,c,d;

    for(int i=1;i<=n;i++){
        cin >> a >> b >> c >> d;

        double ad=findad(a,b,c,d);

        cout << fixed << setprecision(10) << "Case " << i << ": " ;

        cout << ad << endl;


        }

    return 0;
}
