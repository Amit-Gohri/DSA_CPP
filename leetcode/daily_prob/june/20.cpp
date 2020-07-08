//Permutation Sequence
// The set [1,2,3,...,n] contains a total of n! unique permutations.

// By listing and labeling all of the permutations in order, we get the following sequence for n = 3:

// "123"
// "132"
// "213"
// "231"
// "312"
// "321"
// Given n and k, return the kth permutation sequence.

// Note:

// Given n will be between 1 and 9 inclusive.
// Given k will be between 1 and n! inclusive.

#include <bits/stdc++.h>                         
using namespace std;

class Solution
{
public:
    string getPermutation(int n, int k)
    {
        string s, ans;
        s.resize(n);
        iota(s.begin(), s.end(), '1');
        vector<float> fact(n + 1); //look up table
        for (int i = 0; i < n + 1; i++)
        {
            if (i == 0 || i == 1)
            {
                fact[i] = 1;
            }
            else
            {
                fact[i] = i * fact[i - 1];
            }
        }
        int i = 0;
        int count = k;
        //--k;
        ans.resize(n);
        while (n--)
        {
            if (k == 0)
            {
                return ans;
            }

            int num = ceil(count / fact[n]);
            if (!num || num ==  1)
            {
                ans[i] = s[0];
                i++;
                s.erase(0, 1);
            }
            else
            {
                ans[i] = s[num - 1];
                //count %= (int)fact[n];
                count = count - (num - 1) * fact[n];
                //s.erase(s.begin()+ num -1);
                s.erase(num - 1, 1);
                i++;

            }

        }
        return ans;
    }
};

int main() {
    Solution s;
    cout << s.getPermutation(3, 4);
}