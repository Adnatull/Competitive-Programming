    #include<iostream>
     
    using namespace std;
     
    int main(){
        int test;
        cin >> test;
     
        for(int i=1;i<=test;i++){
            int num;
            cin >> num;
            int arr[num],sum=0;
            for(int j=0;j<num;j++){
                cin >> arr[j];
                if(arr[j]>0)
                    sum+=arr[j];
            }
            cout << "Case " << i << ": " << sum << endl;
        }
        return 0;
        }