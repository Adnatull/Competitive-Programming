    #include<iostream>
     
    using namespace std;
     
    int main()
    {
        int test;
        cin >> test;
        for(int i=1;i<=test;i++){
            int a,b,c;
            cin >> a >> b;
            if(a>b)
                c=a-b;
            else
                c=b-a;
            c*=4;
            int d=a*4;
            d=d+c;
            d=d+6+10+3;
            cout << "Case " << i << ": " << d << endl;
        }
        return 0;
    }
