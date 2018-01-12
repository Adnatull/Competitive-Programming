#include<cstdio>
#include<iostream>
#include<algorithm>
#include<ctime>


typedef long long LL;
typedef long L;

using namespace std;

int main(){

	freopen ( "in.txt", "r", stdin );

	LL days, d,m,y;

	L month[13] = {0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	L lmonth[13] = {0,31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	while(cin >> days >> d >> m >> y){

		if(days==0 && d==0 && m==0 && y==0)
			break;

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

		cout << day << " " << j << " " << i << endl;



	}

	return 0;
}