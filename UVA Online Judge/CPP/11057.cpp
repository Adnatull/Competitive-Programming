#include<cstdio>
#include<iostream>
#include<cctype>
#include<cmath>
#include<climits>
#include<algorithm>

#define LL long long
#define L long

using namespace std;

int main(){

   // freopen( "in.txt", "r", stdin );
    //freopen( "out.txt", "w", stdout);

   int n;

    int m,b,mi,x,y,low,high,mid,z;
    int a[100000];
    while(scanf("%d",&n)==1){

       // int a[n+1];
        for(int i=1;i<=n;i++)
            scanf("%d",&a[i]);
        //cin >> m;
        scanf("%d",&m);
        sort(a,a+(n+1));

        //cout << "Peter should buy books whose prices are ";
        printf("Peter should buy books whose prices are ");

        if(n==2)
            printf("%d and %d.\n",a[1],a[2]);
            //cout << a[1] << " and " << a[2] << "." <<  endl;
        else{


        b=a[1];
        mi = INT_MAX;

        for(int i=1;i<=n;i++){
            swap(b,a[i]);

            low=1;
            high = n;



            while(low<=high){
                z=mid;
                mid = (low+high)/2;


                if(b+a[mid]==m){

                    if(abs(b-a[mid])<mi){
                        mi = abs ( b - a[mid] );
                        x = b, y = a[mid];
                    }
                    low = mid+1;
                }
                else if(b+a[mid]<m){
                    low = mid+1;
                }
                else if( b+a[mid] > m)
                    high = mid-1;
            }
        }
        printf("%d and %d.\n",x,y);
       // cout << x << " and " << y << "." << endl;
        }
        printf("\n");
        //cout << endl;

    }


    return 0;
}
