#include <iostream>

using namespace std;

int main() {

    int a, b;
    int i = 1;
    while (cin >> a >> b) {
        if(a== 0 || b==0)
            break;
        if(a/b > 26)
            cout << "Case " << i++ << ": impossible" << endl;
        else if(b > a)
            cout << "Case " << i++ << ": 0" << endl;
        else {
            int x = a%b;
            int y = a/b;
            y--;
            if(x>0) x = 1;
                cout << "Case " << i++ << ": " << x+y << endl;
        }
    }

    return 0;
}
