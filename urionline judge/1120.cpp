#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    while(1){
    char a,b[1001];
    cin >> a >> b;
    if(a==0 && b==0)
        break;
    else{
        int l=strlen(b);
        char c[l];
        int j=0;
        for(int i=0;i<l;i++){
            if(b[i]!=a){
                c[j]=b[i];
                j++;
            }
        }
    }
    }
    return 0;
}
