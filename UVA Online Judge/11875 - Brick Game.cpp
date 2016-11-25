#include<cstdio>

using namespace std;

int main() {

    int n;

    scanf ("%d",&n);

    for (int i=1;i<=n;i++) {

        int x;

        scanf ("%d",&x);

        int arr[x];

        for (int j=0;j<x;j++)
            scanf ("%d",&arr[j]);

        int t=(1+x)/2;

        t= arr[t-1];

        printf("Case %d: %d\n",i,t);



    }

    return 0;
}
