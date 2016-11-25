#include<stdio.h>
#include<iostream>
#include<cstring>
 
using namespace std;
 
int main()
{
    int test;
    cin >> test;
    for(int i=1;i<=test;i++){
        int num;
        cin >> num;
        char field[num];
        scanf("%s",field);
        int cot=0;
        for(int j=0;j<num;){
            if(field[j]=='.'){
                    cot++;
                    j+=3;
            }
            else
                j++;
                    }
        printf("Case %d: %d\n",i,cot);
 
    }
    return 0;
}