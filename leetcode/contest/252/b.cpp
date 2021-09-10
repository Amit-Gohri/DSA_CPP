#include <bits/stdc++.h>
using namespace std;

long long numberOfWeeks(vector<int> &milestones)
{
    sort(milestones.begin(), milestones.end());
    long long maxWeeks(0);
    int i = 0;
    int j = milestones.size() - 1;

    while (i < j)
    {
        if (milestones[i] <= milestones[j])
        {
            milestones[j] = milestones[j] - milestones[i];
            maxWeeks += milestones[i];
            milestones[i] == 0;
            i++;
            if (milestones[j] == 0)
            {
                j--;
            }
        }
        else
        {
            milestones[i] = milestones[i] - milestones[j];
            maxWeeks += milestones[j];
            milestones[j] == 0;
            j--;
        }
    }
    maxWeeks += maxWeeks;
    if (i==j)
    {
        int count1(0);
        for (int k = 0; k < milestones.size(); k++)
        {
            if (milestones[k]!=0)
            {
                count1++;
            }
            
        }
        maxWeeks += count1;
    }
    return maxWeeks;
}

