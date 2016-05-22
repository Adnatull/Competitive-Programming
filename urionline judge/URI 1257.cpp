#include<cstdio>
#include<cstring>


#define input scanf
#define print printf
#define ferot return
#define deci int
#define line char
#define len strlen
#define zokhon while
#define zodi if
#define ba else
#define fr for

using namespace std;

deci main()
{


    deci m,n,i,j,k,sum,l;

    input("%d",&n);

    fr(i=1;i<=n;i++){

        input("%d",&m);

        line a[m][100];

        sum=0;

        fr(j=0;j<m;j++){

            input("%s",a[j]);

            fr(k=0;a[j][k]!=0;k++){
                sum+=a[j][k]-65+j+k;
            }

        }

        print("%d\n",sum);


    }


    ferot 0;
}
