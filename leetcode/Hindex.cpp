#include <bits/stdc++.h>
using namespace std;
int hIndex(vector<int> &citations)
{
    int size = citations.size();
    for (int i = 0; i < size; size++)
    {
        if (citations[i] == (size - i))
        {
            return citations[i];
        }
    }
    return 0;
}

int main(){
    vector<int> a = {0, 1, 3, 5, 6};
    cout << hIndex(a);
}