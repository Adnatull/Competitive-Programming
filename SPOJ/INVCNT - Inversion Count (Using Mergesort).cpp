    #include <bits/stdc++.h>

    //#define mx 200010

    using namespace std;

    int A[200010];
    long long merg(int left, int mid, int right) {

      // cout << left << " nn " << mid << endl;

        long long inversion_count = 0;
        int i = 0;
        int j = 0;
        int k = left;
        int a[mid-left];
        //cout << mid-left << " = " << right-mid+1 << endl;
        int b[right-mid+1];

        for (int m=0;m<mid-left; m++)  a[m] = A[left+m];

        for (int m=0; m<right-mid+1; m++) b[m] = A[mid+m];

        while (i<mid-left && j<right-mid+1) {

          //  cout << a[i] << " " << b[j] ;
            if(a[i]<=b[j])
                A[k++] = a[i++];
            else{ A[k++] = b[j++];

            inversion_count += (long long) mid-left-i;

            }
           // cout <<  " cnt = " << inversion_count << endl;
        }
        while (i<mid-left) A[k++] = a[i++];

        while (j<right-mid+1) A[k++] = b[j++];

        return inversion_count;

    }

    long long mergesort(int left, int right) {

        long long inversion_count = 0;

        if(right>left){
            int mid = (left+right)/2;

            inversion_count = mergesort(left, mid);
            inversion_count += mergesort( mid+1, right);

            inversion_count += merg(left, mid+1, right);

        }
        return inversion_count;
    }

    int main() {

       // freopen ("in.txt", "r", stdin);
        int cas;
        cin >> cas;
        for (int j = 1; j<=cas; j++) {
        int t;
        cin >> t;
        for (int i=0; i<t; i++) {
            cin >> A[i];
        }

       long long total_inversion =  mergesort(0,t-1);
        cout << total_inversion << endl;
        }
        return 0;
    }
