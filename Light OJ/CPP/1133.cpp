#include<iostream>


using namespace std;

int main()
{
    int test;
    cin >> test;
    for(int i=1;i<=test;i++){

        signed long int a,b;
        cin >> a >> b;
        signed long int arr[a];
        for(signed long int j=0;j<a;j++)
            cin >> arr[j];
        for(signed long int k=0;k<b;k++){
        char c;
        cin >> c;
        if(c=='S' || c=='s'){
            signed long int d;
            cin >> d;
            for(signed long int j=0;j<a;j++)
                arr[j]+=d;
        }
        else if(c=='M' || c=='m'){
            signed long int e;
            cin >> e;
            for(signed long int j=0;j<a;j++)
                arr[j]=arr[j]*e;
        }
        else if(c=='D' || c=='d'){
            signed long int f;
            cin >> f;
            for(signed long int j=0;j<a;j++)
                arr[j]=(signed long int)arr[j]/f;
        }
        else if(c=='R' || c=='r'){
            int tr[a],q=0;
            for(long int j=a-1;j>=0;j-- ){
                tr[q]=arr[j];
                q++;
                }
            for(long int j=0;j<a;j++)
                arr[j]=tr[j];
        }
        else if(c=='P' || c=='p'){
            signed long int g,h;
            cin >> g >> h;
            signed long int tmp=0;
            tmp=arr[g];
            arr[g]=arr[h];
            arr[h]=tmp;
        }
        }
        cout << "Case " << i << ":" << endl ;
        for(signed long int j=0;j<a;j++){
            cout << arr[j];
            if(j<a-1)
                cout << " ";
            }
        cout << endl;
    }
    return 0;
