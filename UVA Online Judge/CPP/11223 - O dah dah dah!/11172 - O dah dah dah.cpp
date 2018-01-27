#include <bits/stdc++.h>

using namespace std;

int main() {

   // freopen("in.txt", "r", stdin);
	//	freopen("out.txt", "w", stdout);

    map < string , string > cha;

    cha[".-"] = "A";
    cha["-..."] = "B";
    cha["-.-."] = "C";
    cha["-.."] = "D";
    cha["."] = "E";
    cha["..-."] = "F";
    cha["--."] = "G";
    cha["...."] = "H";
    cha[".."] = "I";
    cha[".---"] = "J";
    cha["-.-"] = "K";
    cha[".-.."] = "L";
    cha["--"] = "M";
    cha["-."] = "N";
    cha["---"] = "O";
    cha[".--."] = "P";
    cha["--.-"] = "Q";
    cha[".-."] = "R";
    cha["..."] = "S";
    cha["-"] = "T";
    cha["..-"] = "U";
    cha["...-"] = "V";
    cha[".--"] = "W";
    cha["-..-"] = "X";
    cha["-.--"] = "Y";
    cha["--.."] = "Z";
    cha["-----"] = "0";
    cha[".----"] = "1";
    cha["..---"] = "2";
    cha["...--"] = "3";
    cha["....-"] = "4";
    cha["....."] = "5";
    cha["-...."] = "6";
    cha["--..."] = "7";
    cha["---.."] = "8";
    cha["----."] = "9";
    cha[".-.-.-"] = ".";
    cha["--..--"] = ",";
    cha["..--.."] = "?";
    cha[".----."] = "'";
    cha["-.-.--"] = "!";
    cha["-..-."] = "/";
    cha["-.--."] = "(";
    cha["-.--.-"] = ")";
    cha[".-..."] = "&";
    cha["---..."] = ":";
    cha["-.-.-."] = ";";
    cha["-...-"] = "=";
    cha[".-.-."] = "+";
    cha["-....-"] = "-";
    cha["..--.-"] = "_";
    cha[".-..-."] = "\"";
    cha[".--.-."] = "@";


    int test;
    cin >> test;
    cin.ignore();
    for (int i=1; i<=test; i++) {
        if(i>1) cout << endl;
        cout << "Message #" << i << endl;
       string s;
   
       getline(cin,s);
        string tmp = "";
        for (int j=0; j<(int)s.size(); j++) {
				if(s[j]!=32)  { 
					tmp.push_back(s[j]);
				}
				else if (s[j]==32 && s[j-1]!=32) cout << cha[tmp],tmp="";
				else cout << " ";
            
        }
		cout << cha[tmp] << endl;

    }

    return 0;
}
