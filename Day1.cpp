unsigned int countBits(unsigned long long n){
    int bin = 0, k = 1, result = 0, now;
    while(n)
    {
      now = n % 2;
      if(now)result++;
      bin += now * k;
      k *= 10;
      n /= 2;
    }
  return result;
}
