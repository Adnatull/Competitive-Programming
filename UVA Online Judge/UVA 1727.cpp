#include<cstdio>
#include<cstring>

using namespace std;


int main(){

    int n;

    char m[12][20]={"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};

    char m_days[12]={31,28,31,30,31,30,31,31,30,31,30,31};

    char d[7][20]={"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};


    char a[20],b[20];

    scanf("%d",&n);

    int mont;

    int i,j,k,x,y;

    for(i=1;i<=n;i++){

            y=0;

            scanf("%s %s",a,b);

            for(j=0;j<12;j++){
                    if(strcmp(a,m[j])==0){
                        mont=m_days[j];
                        break;
                    }
            }

            char days[mont][20];

            for(j=0;j<7;j++){

                if(strcmp(d[j],b)==0){
                    x=j;
                    break;
                }

            }

            for(j=0,k=x;j<mont;j++,k++){

                if(k==7)
                    k=0;

                strcpy(days[j],d[k]);

            }

            for(j=0;j<mont;j++){
                if(strcmp(days[j],"SAT")==0 || strcmp(days[j],"FRI")==0)
                    y++;
            }

            printf("%d\n",y);

    }

}

