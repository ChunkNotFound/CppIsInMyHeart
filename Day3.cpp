#include <string>
#include <vector>
#include <tgmath.h>
using namespace std;
vector<string> solution(const string &s)
{
  int size = round(s.size()/2.0);
  //if(size>static_cast<int>(s.size()))size++;
  vector<string> result;
  for(int i=0;i<size;i++)
  {
    string now;
    now.push_back(s[(i*2)]);
    if(s[(i*2)+1])now.push_back(s[(i*2)+1]);
    else now.push_back('_');
    result.push_back(now);
  }
  return result;
}
