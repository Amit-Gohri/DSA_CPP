#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> spiral(int A)
{
    int sq = sqrt(A);
    int count(1);
    int row(0), col(0);
    int rdir(1), cdir(1);
    vector<vector<int>> sol(A, vector<int>(A, 0));
    for (int i = A; i > 0; i--)
    {
        if (i == A)
        {
            for (int j = 0; j < i; j++) 
            {
                sol[row][col] = count;
                col += cdir;
                count++;
            }
            col += -cdir;
            cdir = cdir == 1 ? -1 : 1;
            row += rdir;
        }
        else
        {
            //loop itimes for row
            for (int j = 0; j < i; j++)
            {
                sol[row][col] = count;
                count++;
                row += rdir;
            }
            row += -rdir;
            rdir = rdir == 1 ? -1 : 1;
            col += cdir;

            //loop itimes for col
            for (int j = 0; j < i; j++)
            {
                sol[row][col] = count;
                count++;
                col += cdir;
            }
            col += -cdir;
            cdir = cdir == 1 ? -1 : 1;
            row += rdir;

            
        }

    }
    return sol;

}

int main()
{

    vector<vector<int>> ans = spiral(5);
}