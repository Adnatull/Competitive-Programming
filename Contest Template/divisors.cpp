int numDiv(int N) {

    int i = 0, factor = primes[i], ans = 1;

    while(factor * factor <= N) {
        int power = 0;
        while(N % factor == 0) { N /= factor; power++; }
        ans *= (power + 1);
        factor = primes[++i];
    }
    if(N != 1) ans *= 2;
    return ans;
}
