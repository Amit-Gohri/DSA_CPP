#include<bits/stdc++.h>

using namespace std;

void rec(vector<vector<int>>& points, int crt_row, int pre_col, long long& maxScore) {
    int score(INT_MIN);
    int selectedCol(0);
    if (crt_row == points.size())
    {
        return;
    }
    if (crt_row == 0)
    {
        for (int i = 0; i < points[0].size(); i++)
        {
            if (points[0][i] > score)
            {
                score = points[0][i];
                selectedCol = i;
            }

        }
        maxScore += score;
        rec(points, crt_row + 1, selectedCol, maxScore);
    }
    else
    {
        for (int i = 0; i < points[crt_row].size(); i++)
        {
            // score = maxScore + points[crt_row][i] + abs(i - pre_col) > score ? maxScore + points[crt_row][i] + abs(i - pre_col) : score;
            if (points[crt_row][i] - abs(i - pre_col) > score)
            {
                score = points[crt_row][i] - abs(i - pre_col);
                selectedCol = i;
            }

        }
        maxScore += score;
        rec(points, crt_row + 1, selectedCol, maxScore);
    }




}


long long maxPoints(vector<vector<int>> points) {
    long long maxScore(0);
    rec(points, 0, -1, maxScore);
    return maxScore;
}

int main() {
    cout << maxPoints({
        {1,2,3},
        {1,5,1},
        {3,1,1}
        });
}