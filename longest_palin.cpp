#include <iostream>
#include <string>
#include <climits>
using namespace std;

void print_ans(string& A, int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << A[i];
    }
}

int main()
{
    int amit;
    string A;
    cin >> A;
    string ans;
    int start, end, dist(0), len(0), max_len(0);
    int j = 0;
    for (int i = 1; i < A.size(); i++)
    {
        if (A[i]==A[i-1])
        {
            if (i==A.size()-1 )
            {
                print_ans(A, 0, A.size() - 1);
                return 0;
            }
            continue;
        }
        else
            break;
    }
    
    for (int i = 1; i < A.size(); i++)
    {
        dist = 0;
        //odd
        while (i - dist >= 0 && i + dist < A.size())
        {
            if (A[i - dist] == A[i + dist])
            {
                dist++;
            }
            else
            {
                break;
            }
        }
        len = 2 * (dist - 1) + 1;
        if (len > max_len)
        {
            start = i - (dist-1);
            end = i + (dist-1);
            max_len = len;
        }

        //for even
        dist = 0;
        
        while (i + dist < A.size() && j - dist >= 0)
        {
            if (A[j - dist] == A[i + dist])
            {
                dist++;
            }
            else
            {
                break;
            }
        }
        len = 2 * (dist-1) + 2;
        if (len > max_len)
        {
            start = j - dist+1;
            end = i + dist-1;
            max_len = len;
        }
        j++;
    }
    print_ans(A, start, end);
}
