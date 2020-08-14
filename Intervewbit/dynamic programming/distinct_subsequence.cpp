//https://www.interviewbit.com/problems/distinct-subsequences/

#include <bits/stdc++.h>
using namespace std;

int rec(string A, string B, int i, int j)
{
    //base case
    if (i == A.size() && j < B.size())
    {
        return 0;
    }
    if (j == B.size())
    {
        return 1;
    }

    if (A[i] != B[j])
    {
        return rec(A, B, i + 1, j);
    }
    else
    {
        if (j == B.size() - 1)
        {
            return 1 + rec(A, B, i + 1, j);
        }

        return rec(A, B, i + 1, j + 1) + rec(A, B, i + 1, j);
    }
}

int ways(string A, string B)
{
    vector<vector<int>> dp(A.size() + 1, vector<int>(B.size() + 1, 0));
    //  initialisation
    for (int i = 0; i < A.size(); i++)
    {
        dp[i][B.size()] = 1;
    }

    for (int j = B.size() - 1; j >= 0; j--)
    {
        for (int i = A.size() - 1; i >= 0; i--)
        {
            if (A[i] != B[j])
            {
                dp[i][j] = dp[i + 1][j];
            }
            else
            {
                if (j == B.size() - 1)
                {
                    dp[i][j] = dp[i + 1][j] + 1;
                }
                else
                {
                    dp[i][j] = dp[i + 1][j + 1] + dp[i + 1][j];
                }
            }
        }
    }
    return dp[0][0];
}

int main()
{
    cout << ways("xslledayhxhadmctrliaxqpokyezcfhzaskeykchkmhpyjipxtsuljkwkovmvelvwxzwieeuqnjozrfwmzsylcwvsthnxujvrkszqwtglewkycikdaiocglwzukwovsghkhyidevhbgffoqkpabthmqihcfxxzdejletqjoxmwftlxfcxgxgvpperwbqvhxgsbbkmphyomtbjzdjhcrcsggleiczpbfjcgtpycpmrjnckslrwduqlccqmgrdhxolfjafmsrfdghnatexyanldrdpxvvgujsztuffoymrfteholgonuaqndinadtumnuhkboyzaqguwqijwxxszngextfcozpetyownmyneehdwqmtpjloztswmzzdzqhuoxrblppqvyvsqhnhryvqsqogpnlqfulurexdtovqpqkfxxnqykgscxaskmksivoazlducanrqxynxlgvwonalpsyddqmaemcrrwvrjmjjnygyebwtqxehrclwsxzylbqexnxjcgspeynlbmetlkacnnbhmaizbadynajpibepbuacggxrqavfnwpcwxbzxfymhjcslghmajrirqzjqxpgtgisfjreqrqabssobbadmtmdknmakdigjqyqcruujlwmfoagrckdwyiglviyyrekjealvvigiesnvuumxgsveadrxlpwetioxibtdjblowblqvzpbrmhupyrdophjxvhgzclidzybajuxllacyhyphssvhcffxonysahvzhzbttyeeyiefhunbokiqrpqfcoxdxvefugapeevdoakxwzykmhbdytjbhigffkmbqmqxsoaiomgmmgwapzdosorcxxhejvgajyzdmzlcntqbapbpofdjtulstuzdrffafedufqwsknumcxbschdybosxkrabyfdejgyozwillcxpcaiehlelczioskqtptzaczobvyojdlyflilvwqgyrqmjaeepydrcchfyftjighntqzoo",
"rwmimatmhydhbujebqehjprrwfkoebcxxqfktayaaeheys");
    
}