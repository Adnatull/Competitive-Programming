#include<cstdio>

#define scan scanf
#define print printf
#define fr for
#define zodi if
#define zokhon while
#define ferot return
#define deci int
#define tata break
#define othoba else

using namespace std;

deci main()
{
    deci a;

    zokhon(1){
        deci p,i,j,k,c[5];
        scan("%d",&a);

        zodi(a==0)
            tata;

        fr(p=1;p<=a;p++){

        deci b[5]={0};

        fr(i=0;i<5;i++){
            scan("%d",&b[i]);
            c[i]=-1;
            }

        deci x=0;

        deci d,e=0;

            x=0;
            fr(j=0;j<5;j++){
                zodi(b[j]>127){
                    x++;
                    }
            }

            zodi(x==4){
                fr(k=0;k<5;k++){
                zodi(b[k]<=127){
                    print("%c\n",65+k);
                    tata;
                }
            }
              }
            othoba{
                print("*\n");
            }
        }
    }
    ferot 0;
}
