    #include<iostream>

    using namespace std;

    int main()
    {
        int test;
        cin >> test;
        for(int i=1;i<=test;i++){
            long int num;
            cin >> num;
            long cot=0;
            for(;num>0;num=num/2){
                if(num%2==1)
                    cot++;
            }
            cout << "Case " << i ;
            if(cot%2==0)
                cout << ": even" << endl;
            else
                cout << ": odd" << endl;

        }
        return 0;
    }
