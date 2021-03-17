#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    int a[13];
    for(int i=1; i<=n; i++) {

        bool zero = true;
        int x;
        for(int j=0;j<13; j++) {
            cin >> x;
            if(x==0){
                zero = false;
            }
        }
        cout << "Set #" << i << ": ";
        if(zero)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
