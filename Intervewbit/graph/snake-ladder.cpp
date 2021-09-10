//https://www.interviewbit.com/problems/snake-ladder-problem/
#include <bits/stdc++.h>
using namespace std;

int least_rolls(vector<vector<int>> A, vector<vector<int>> B)
{
    int ans(INT_MAX);
    vector<int> visited(100);
    queue<pair<int, int>> q;
    q.push({1, 0});
    while (!q.empty())
    {
        pair<int, int> crt = q.front();

        q.pop();
        if (crt.first == 100)
        {
            ans = min(ans, crt.second);
        }
        

        if (!visited[crt.first - 1])
        {
            visited[crt.first - 1] = 1;
            //push next positions
            //check range
            //ladder, snake
            for (int i = 1; i <= 6; i++)
            {
                bool set(0);
                int pos = crt.first;
                if (pos+i>100)
                {
                    break;
                }
                
                for (int j = 0; j < A.size(); j++)
                {
                    if ((pos + i) == A[j][0])
                    {
                        //match ladder
                        q.push({A[j][1], crt.second + 1});
                        set = 1;
                    }
                }
                for (int j = 0; j < B.size(); j++)
                {
                    if (pos + i == B[j][0])
                    {
                        //match snake
                        q.push({B[j][1], crt.second + 1});
                        set = 1;
                    }
                }
                if (!set)
                {
                    q.push({pos + i, crt.second + 1});
                }
            }
        }
    }
    return ans;
}

int main(){

}