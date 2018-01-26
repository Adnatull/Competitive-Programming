    #include<cstring>
    #include<cstdio>
    #include<cmath>
    #include<cctype>
    #include<cstdlib>
    #include<algorithm>

    using namespace std;




    int main(){


        int n,x,y;

        scanf("%d",&n);

        char s1[100],s2[100];

        char a[4][5],b[4][10];

        int c[4];

        char d[4][10];

        char o[10];


        int i,j,k,l,m,p;

        for(i=1;i<=n;i++){
            scanf("%s %s",s1,s2);

            j=0,k=0,l=0;

            while(s1[j]!='\0'){

                if(!isdigit(s1[j])){

                    a[k][l]='\0';
                    l=0;
                    k++;
                    j++;
                }

                a[k][l]=s1[j];
                j++;
                l++;
            }
            a[k][l]='\0';

            j=0,k=0,l=0;

            while(s2[j]!='\0'){

                if(!isdigit(s2[j])){

                    b[k][l]='\0';
                    l=0;
                    k++;
                    j++;
                }

                b[k][l]=s2[j];
                j++;
                l++;
            }
            b[k][l]='\0';

            for(j=0;j<4;j++){
                c[j]=atoi(a[j]);

                x=c[j];

                m=0;

                while(x>0){

                    y=x%2;
                    d[j][m]=y+'0';
                    m++;

                    x=x/2;

                }
                d[j][m]='\0';

            }


            for(j=0;j<4;j++){
                m=strlen(d[j]);
                if(m<8){
                    for(k=m;k<8;k++)
                        d[j][k]='0';
                    d[j][k]='\0';
                }
                reverse(d[j],d[j]+8);
                }



           /* for(j=0;j<4;j++){
                printf("%s %s\n",b[j],d[j]);

            }*/


            p=0;
            for(j=0;j<4;j++){
                if(strcmp(d[j],b[j])!=0){
                    p=1;
                    break;
                }
                }


            if(p==0)
                printf("Case %d: Yes\n",i);
            else
                printf("Case %d: No\n",i);


        }

        return 0;
    }
