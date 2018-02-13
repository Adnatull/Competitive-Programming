#include <iostream>

using namespace std;

int main() {
  // freopen("in.txt", "r", stdin);
    
   int a[]={1, 64, 729, 4096, 15625, 46656, 117649, 262144, 531441,
1000000, 1771561, 2985984, 4826809, 7529536, 11390625, 16777216, 24137569, 34012224,
47045881, 64000000 , 85766121};

    int x;
    while (scanf ("%d", &x)) { 
        if(x==0)
            break;
        int l = sizeof(a)/sizeof(a[0]);
        bool found = false;
        for (int i=0; i<l; i++){
            if(a[i]==x) { 
                found = true;
                break;
                }
        }
       if(found) {
            printf ("Special\n");
       }
       else printf ("Ordinary\n");
        }

    return 0;
}