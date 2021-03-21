#include <bits/stdc++.h>

using namespace std;
vector<string> dictionary;
vector<string> passwords;
int l;
string s;

void gen(string pass, int index, int length) {
    if(index == length) {
        passwords.push_back(pass);
        return;
    }
    if(s[index] == '#') {
        for(int i=0; i<dictionary.size(); i++) {
            gen(pass + dictionary[i], index+1, length);
        }
    } else {
        for(int i=0; i<=9; i++) {
            gen(pass + to_string(i), index+1, length);
        }
    }
}

int main() {

    int n;
    while(cin >> n) {
        dictionary.clear();
        passwords.clear();

        for(int i=0; i<n; i++){
            cin >> s;
            dictionary.push_back(s);
        }
        int m;
        cin >> m;
        cout << "--" << endl;
        for(int i=0; i<m; i++) {
            cin >> s;
            l = s.size();
            gen("",0,l);
            for(int j=0; j<passwords.size(); j++) {
                cout << passwords[j] << endl;
            }
        }
    }
    return 0;
}
