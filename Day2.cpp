#include <string>
using namespace std;
int square_digits(int num) 
{
  string numStr = to_string(num);
  string resStr="";
  for (char i:numStr)
  {
    int digit = i - '0';
    resStr += to_string(digit * digit);
  }
  return stoi(resStr);
}
