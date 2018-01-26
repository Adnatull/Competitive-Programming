#include<iostream>
#include<cstdio>
#include<algorithm>
#include<functional>

#define LL long long
#define L long

using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i=1;i<=n;i++){

        int a;
        cin >> a;
        int b[a],c[a];

        for(int j=0;j<a;j++)
            cin >> b[j];
        for(int j=0;j<a;j++)
            cin >> c[j];
        sort(b,b+a);
        sort(c,c+a,greater <int> ());


        int r=0;
        for(int j=0;j<a;j++){
            for(int k=0;k<a;k++){

                if(c[k]!=-1){
                    if(b[j]>c[k]){
                        r+=2;
                        b[j]=-1,c[k]=-1;
                        break;
                    }
                }

            }
        }
        for(int j=0;j<a;j++){
                if(b[j]!=-1){
            for(int k=0;k<a;k++){

                if(c[k]!=-1){
                    if(b[j]==c[k]){
                        r+=1;
                        b[j]=-1,c[k]=-1;
                        break;
                    }
                }

            }
            }
        }

        cout << "Case " << i << ": " << r << endl;



    }


}
