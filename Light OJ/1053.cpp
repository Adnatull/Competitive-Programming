#include<iostream>
 
using namespace std;
 
int main()
{
    int test;
    cin >> test;
    for(int i=1;i<=test;i++){
        int a,b,c;
        cin >> a >> b >> c;
        a*=a;
        b*=b;
        c*=c;
        cout << "Case " << i << ": ";
        if(a==b+c || b==a+c || c==a+b)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}