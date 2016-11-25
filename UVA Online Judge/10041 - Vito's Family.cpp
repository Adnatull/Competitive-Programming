#include<cstdio>
#include<algorithm>
#include<cmath>

using namespace std;

int main() {

	//freopen ( "in.txt", "r", stdin );

	int t,n,mid,sum;

	scanf("%d",&t);

	while (t--) {

		scanf ("%d",&n);

		int arr[n];

		for (int i=0;i<n;i++)
			scanf ("%d",&arr[i]);

		sort (arr,arr+n);

		mid = n/2;
		sum = 0;
		for (int i=0;i<n;i++){
			if (arr[i]!=arr[mid])
				sum+=abs(arr[mid]-arr[i]);
		}

		printf ("%d\n",sum);


	}

	return 0;
}