#include<cstdio>
#include<cstring>
#include<cctype>
#include<algorithm>
#include<functional>


#define deci int
#define doshomik double
#define line char
#define ferot return
#define zokhon while
#define zodi if
#define ba else
#define len strlen
#define lcopy strcpy
#define input scanf
#define print printf
#define fr for
#define upper isupper



using namespace std;

deci main()
{
    deci t;
    input("%d%*c",&t);

    line x[200];

    line alpha[30];
    lcopy(alpha,"abcdefghijklmnopqrstuvwxyz");

    deci p,i,j,q;
    deci c[26];

    zokhon(t--){
       //input("%[^\n]",x);
       gets(x);

        fr(i=0;x[i]!='\0';i++){
            zodi(upper(x[i]))
                x[i]=tolower(x[i]);
        }

        fr(i=0;i<26;i++)
            c[i]=0;

        fr(i=0;alpha[i]!='\0';i++){

            fr(j=0;x[j]!='\0';j++){
                zodi(alpha[i]==x[j])
                    c[i]++;
            }
        }

        q=*max_element(c,c+26);
        fr(i=0;i<26;i++){
            zodi(q==c[i])
                print("%c",alpha[i]);
        }
        print("\n");
    }


    ferot 0;
}
