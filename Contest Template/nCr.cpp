

L dp[110][110];

L nCr (int n, int r)  { 
	if(n==r || r==0) return 1;
	if(r==1) return n;
	if(dp[n][r]) return dp[n][r];
	
	return dp[n][r] =  nCr(n-1,r-1)+nCr(n-1,r);	
}
