#include <bits/stdc++.h>

using namespace std;

int magic [9][3][3];

void process(int i, int j, int num, int index) {

    if(!magic[index][i][j]) {
        magic[index][i][j] = num;
        if (num%3==0) {
            j++;
            j= j%3;
        } else {
            i++, j--;
            i = i%3;
            j = (j+3)%3;
        }
        num += 1;
        process(i,j,num,index);
    }

}

void generateMagicSquare(){

    memset(magic, 0, sizeof magic);
    int index = 0;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            process(i,j,1,index);
            index++;
        }
    }

    for (int i=0; i<9; i++) {
        cout << "Index = " << i << endl;
        for (int j=0; j<3; j++) {
            for (int k=0; k<3; k++) {
                cout << magic[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl << endl;
    }

}

int main() {

    generateMagicSquare();

    return 0;
}
