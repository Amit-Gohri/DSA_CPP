#include <bits/stdc++.h>
using namespace std;

int minRungs(vector<int> &rungs, int dist)
{
    //1,3,5,10
    //2
    int minRungs(0);
    for (int i = 0; i < rungs.size(); i++)
    {
        // rung[i] - rung[i-1] <= dist
        //case when i == 0
        if (i == 0)
        {
            if (rungs[i] > dist)
            {
                minRungs += (rungs[i] - 1) / dist;
            }
        }

        else
        {
            if (rungs[i] - rungs[i - 1] <= dist)
            {
                //we can climb to next rung
            }
            else
            {
                //calculate the min rungs needed to react rung[i];
                int dist_btw = rungs[i] - rungs[i - 1] - 1;
                minRungs += dist_btw / dist;
            }
        }
    }
    return minRungs;
}
