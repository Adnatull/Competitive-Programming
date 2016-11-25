#include<iostream>


using namespace std;

int main()
{
    int test;
    cin >> test;
    for(int i=1;i<=test;i++){
        unsigned long long int num;
        cin >> num;
        cout << "Case " << i << ": " ;
        if(num%2!=0)
            cout << "Impossible" << endl;
        else{
           unsigned long long int a;
            a=num/2;

            for(unsigned long long int j=2;j<=num/2;j=j+2){


                if(num%j==0 && (num/j)%2!=0){
                    cout << num/j << " " << j << endl;

                    break;
                    }

            }
        }

    }
    return 0;
}
