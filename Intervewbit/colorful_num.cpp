#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;
int colNum(int A)
{
    //int converted to string
    unordered_map<int, int> umap;
    string s;
    int i = 0;
    while(A){
        s[i] = A % 10;
        A /= 10;
    }
    cout << s;
    return 2;
}
int main()
{
    colNum(356);
    //cout<<s
}