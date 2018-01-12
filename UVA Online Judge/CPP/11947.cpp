#include<cstdio>
#include<iostream>
#include<cstring>

typedef long long LL;
typedef long L;

using namespace std;

int main(){


	LL days, d,m,y;

	L month[13] = {0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	L lmonth[13] = {0,31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	//freopen ( "in.txt", "r", stdin );



	int test;
	cin >> test;

	char s[10];

	for(int x=1;x<=test;x++){

		cin >> s;

		d=(s[2]-48)*10+(s[3]-48);

		m=(s[0]-48)*10+(s[1]-48);

		y = (((s[4]-48)*10+s[5]-48)*10+s[6]-48)*10+s[7]-48;

		days = 280;

		//cout << days << " " << d << " " << m << " " << y << endl;

		LL leap=0;
		if(m>2)
			leap=y/4-y/100+y/400;
		else{
			LL x=y-1;
			leap = x/4-x/100+x/400;
		}

		LL day=(y-1)*365;
		for(int i=1;i<m;i++){
			day+=month[i];
		}
		day+=d+leap;

		day += days;

		//cout << day << endl;
		LL i;

		for(i=1;;i++){

			if ((day < 367) && ((i%4==0 && i%100!=0) || i%400==0))
				break;
			else if ( day < 366 )
				break;

			if((i%4==0 && i%100!=0) || i%400==0){
				day-=366;
			}
			else
				day-=365;
		}

		//cout << i << " " << day << endl;

		LL j;
		

		if((i%4==0 && i%100!=0) || i%400==0){

			for ( j=1 ; ;j++ ){



				if(day <= lmonth[j])
					break;


					day-=lmonth[j];


			}

		}
		else{

			for ( j=1 ; ;j++ ){



				if(day <= month[j])
					break;


					day-=month[j];


			}

		}

		

		d=day,m=j,y=i;

		cout << x << " ";
		if(m<10)
			cout << "0";
		cout << m << "/" ;
		if(d<10)
			cout << "0";
		cout << d << "/" ;
				cout << y << " ";

		if((m==1 && d>=21) || (m==2 && d<=19) )
			cout << "aquarius" << endl;
		else if((m==2 && d>=20) || (m==3 && d<=20 ))
			cout << "pisces" << endl;
		else if((m==3 && d>=21) || (m==4 && d<=20 ))
			cout << "aries" << endl;
		else if((m==4 && d>=21) || (m==5 && d<=21 ))
			cout << "taurus" << endl;
		else if((m==5 && d>=22) || (m==6 && d<=21 ))
			cout << "gemini" << endl;
		else if((m==6 && d>=22) || (m==7 && d<=22 ))
			cout << "cancer" << endl;
		else if((m==7 && d>=23) || (m==8 && d<=21 ))
			cout << "leo" << endl;
		else if((m==8 && d>=22) || (m==9 && d<=23 ))
			cout << "virgo" << endl;
		else if((m==9 && d>=24) || (m==10 && d<=23 ))
			cout << "libra" << endl;
		else if((m==10 && d>=24) || (m==11 && d<=22 ))
			cout << "scorpio" << endl;
		else if((m==11 && d>=23) || (m==12 && d<=22 ))
			cout << "sagittarius" << endl;
		else if((m==12 && d>=23) || (m==1 && d<=20 ))
			cout << "capricorn" << endl;





	}

	return 0;
}