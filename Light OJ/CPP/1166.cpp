    #include<iostream>

    using namespace std;

    int main()
    {
        int test;
        cin >> test;
        for(int i=1;i<=test;i++){
            int num;
            cin >> num;
            int arr[num+1];
            arr[0]=0;
            int a[num+1];
            a[0]=0;
            for(int j=1;j<=num;j++){
                a[j]=j;
            }
            for(int j=1;j<=num;j++)
                cin >> arr[j];
            int cot,temp=0,p=0;

             for(int j=1;j<=num;j++){
                if(a[j]!=arr[j]){
                for(int k=j;k<=num;k++){
                    if(a[j]==arr[k]){
                        temp=arr[k];
                        arr[k]=arr[j];
                        arr[j]=temp;
                        p++;
                    }
                }
                }
             }
             cout << "Case " << i << ": " << p << endl;
        }
        return 0;
    }
