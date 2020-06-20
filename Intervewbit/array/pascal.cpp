#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> pascal(int num)
{
    vector<vector<int>> sol;
    if (num == 0)
    {
        return sol;
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            //to create ith row
            if (i == 1)
            {
                sol.push_back({ 1 });
            }
            else
            {
                //i>1;
                vector<int> row;
                int size = sol[i - 2].size();
                for (int j = 0; j < size; j++) //j for traversing in row
                {
                    if (j == 0)
                    {
                        row.push_back(sol[i - 2][j]);
                        if ((j + 1) < size)
                        {
                            row.push_back(sol[i - 2][j] + sol[i - 2][j + 1]);
                        }
                        else {
                            row.push_back(sol[i - 2][j]);
                        }
                    }
                    else if (j + 1 == size)
                    {
                        row.push_back(sol[i - 2][j]);
                    }

                    else
                    {

                        row.push_back(sol[i - 2][j] + sol[i - 2][j + 1]);
                    }
                }
                sol.push_back(row);
            }
        }
    }
    return sol;
}

int main() {
    vector<vector<int>> ans = pascal(4);
}