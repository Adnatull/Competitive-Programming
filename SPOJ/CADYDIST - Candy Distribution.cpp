#include<bits/stdc++.h>

using namespace std;

int main() {

  //  freopen("in.txt", "r", stdin );

    long N;
    while (cin >> N) {
            if(N==0)
                break;

        long long students[N], price[N];

        for (int j=0;j<N;j++)
            cin >> students[j];

        for (int j=0;j<N;j++)
            cin >> price[j];

        sort(students,students+N,greater<long>());
        sort(price,price+N);

        long long cost=0;

        for (int j=0;j<N;j++) {

            cost+=(students[j]*price[j]);
        }

        cout << cost << endl;

    }


    return 0;
}
