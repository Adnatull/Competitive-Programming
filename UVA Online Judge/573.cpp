//https://uva.onlinejudge.org/external/5/573.pdf
//Don't copy my code. Try your own.
//Runtime: 0.000s
//Code Begins

#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>

#define sc scanf
#define pr printf
#define rt return
#define LL long long
#define L long

using namespace std;

int main(){
	
	//freopen("input.txt","r",stdin);
	
	double H,D,U,F,x;
	
	while(sc("%lf %lf %lf %lf",&H,&U,&D,&F)==4){
		
		if(H==0)
			break;
			
		x=(U/100)*F;

		
		double h=0;
		for(int i=1;;i++){
			

			h=h+U;

			if(h>H){
				pr("success on day %d\n",i);
				break;
			}
			else if(h<0){
				pr("failure on day %d\n",i);
				break;				
				}
			h-=D;

			if(h<0){
				pr("failure on day %d\n",i);
				break;				
			}

			U=U-x;
			if(U<0)
				U=0;
			}
			
		
		}
	
	return 0;
}
//Code Ends
