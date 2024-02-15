#include <vector>
#include <utility>
using namespace std;
int sum_intervals(vector<pair<int, int>> intervals) {
    vector<pair<int,int>> rePair;
    int res = 0, situat = 0;
    pair<int, int> uncount = make_pair(-1, -1);
    for (int i = 0; i < size(intervals); i++)
    {
        for (int ii = intervals[i].first; ii < intervals[i].second; ii++)
        {
            if (situat > 0)break;
            for (int iii = 1; iii < size(intervals) - i; iii++)
            {
                if (situat > 0)break;
                if (i + iii < size(intervals))
                {
                    for (int iv = intervals[i + iii].first; iv < intervals[i + iii].second; iv++)
                    {
                        if (ii == iv)
                        {
                            if (intervals[i + iii].first <= intervals[i].second && intervals[i].second <= intervals[i + iii].second)situat = 1;
                            else if (intervals[i].first <= intervals[i + iii].second && intervals[i + iii].second <= intervals[i].second)situat = 2;
                            else printf("Overlapping error");
                            uncount = make_pair(i, i + iii);
                            break;
                        }
                    }
                }
            }
        }
        if (situat == 0)res += intervals[i].second - intervals[i].first;
        else if (i != uncount.first && i != uncount.second) rePair.insert(rePair.end(), make_pair(intervals[i].first, intervals[i].second));
    }
    if(situat == 0) return res;
    else if (situat == 1)rePair.insert(rePair.end(), make_pair(intervals[uncount.first].first, intervals[uncount.second].second));
    else if (situat == 2)rePair.insert(rePair.end(), make_pair(intervals[uncount.second].first, intervals[uncount.first].second));
    return sum_intervals(rePair);
}
