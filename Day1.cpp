unsigned int countBits(unsigned long long n){
    int result = 0, now;
    while(n)
    {
      now = n % 2;
      if(now)result++;
      n /= 2;
    }
  return result;
}
