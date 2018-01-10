pair < int, int > queen[9];
bool isvalid(int row, int column) { 	
	for (int i=1; i<row; i++)  {
			if( queen[i].ss==column || queen[i].ss-queen[i].ff==column-row || queen[i].ss+queen[i].ff==column+row) return false;
	}
	return true;
}
int cases=0;
void generate(int row) { 	
	if(row==9) { 
		cout << endl << "Way N.O. = " << ++cases << endl << endl; 
		for (int i=1; i<=8; i++) { 
			cout << "Row = " << i << " | Column = " << queen[i].ss << endl;
		}
		return;
	}	
	FOR(i,1,8) { 
		if(isvalid(row,i)) { 
			queen[row]=mp(row,i);
			generate(row+1);
		}
	}	
}

int main() { 
	//freopen ("in.txt", "r", stdin);
		generate(1);
	return 0;
}

