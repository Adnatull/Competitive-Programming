#include <bits/stdc++.h>

using namespace std;

bool isint(string s) { 
	if (s.size()==1 && (s=="0" || s=="1"))
		return true;
	return false;
}

bool isproject ( string s ) { 
	for (unsigned int i=0; i<s.size(); i++) { 
		if (islower(s[i])) {
			return false;
		}
	}
	return true;
}

bool compare(pair<int, string> a, pair<int, string> b) { 
	if ( a.first > b.first ) return true;
	else if (a.first == b.first) { 
		if ( a.second < b.second ) return true;
	}
	return false;
}

void process ( map <string, set <string> > lst, vector < string > project) { 
	map < string, int > count;
	
	for (unsigned int i=0; i<project.size(); i++) { 
		for (auto j=lst[project[i]].begin(); j!=lst[project[i]].end(); ++j) { 
				count[*j]++;
		}
	}
	
	vector < pair < int, string > > finallist;
	for (unsigned int i=0; i<project.size(); i++) { 
		int cnt = 0;
		for (auto j=lst[project[i]].begin(); j!=lst[project[i]].end(); ++j) { 
				if (count[*j]==1) cnt++;
		}
		finallist.push_back(make_pair(cnt,project[i]));
	}
	sort(finallist.begin(), finallist.end(), compare);
	for (unsigned int i=0; i<finallist.size(); i++) { 
		cout << finallist[i].second << " " << finallist[i].first << endl;
	}
}

int main() { 
	
	//freopen ( "in.txt", "r" ,stdin);
	//freopen ( "out.txt", "w", stdout);
	
	map < string, set < string > > lst;
	string s;
	vector < string > project;
	string tmpproject = "";
	while (getline(cin, s)) { 
		if (isint(s)) { 
			if (s=="0")
				break;
			process(lst, project);
			lst.clear();
			project.clear();
		} else { 
			if ( isproject(s)) { 
				project.push_back(s);
				tmpproject = s;
			} else { 
				lst[tmpproject].insert(s);
			} 
		}		
	}
	return 0;
}
