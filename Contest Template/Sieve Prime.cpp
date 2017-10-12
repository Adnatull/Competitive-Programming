int prime[Local];
bool chk[Global];
int koto;
void pr() { 
	
	prime[koto++] = 2;
	int n = sqrt(Global)+1;
	for (int i=3; i<=n; i+=2) { 
		if(!chk[i]) { 
			for (int j=i*i; j<Global; j+=i*2) { 
				chk[j] = true;
			}
		}
	}
	for (int i=3; i<Global; i+=2) if(!chk[i]) prime[koto++] = i;
}
