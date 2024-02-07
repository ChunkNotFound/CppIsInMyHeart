#include <vector>
std::vector<int> move_zeroes(const std::vector<int>& input) {
  for(int n:input)
  {
    if(n!=0)goto notzero;
  }
  return input;
  notzero:
  std::vector<int>result = input;
  for(int n=0;n<size(input);n++)
  {
    if(result[n]==0)
    {
      for(int i=n;i<size(input)-1;i++)
      {
        result[i]=result[i+1];
      }
      result[size(input)-1]=0;
    }
  }
  return result;
}
