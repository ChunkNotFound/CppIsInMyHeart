#include <string>
using namespace std;
string rot13(string msg)
{
  string result;
  for(char l:msg)
  {
    if(int('a')<=int(l)&&int(l)<=int('z'))
    {
      if(int(l)+13>int('z'))result.push_back(char(int(l)+12-(int('z')-int('a'))));
      else result.push_back(char(int(l)+13));
    }
    else if(int('A')<=int(l)&&int(l)<=int('Z'))
    {
      if(int(l)+13>int('Z'))result.push_back(char(int(l)+12-(int('Z')-int('A'))));
      else result.push_back(char(int(l)+13));
    }
    else result.push_back(l);
  }
  return result;
}
