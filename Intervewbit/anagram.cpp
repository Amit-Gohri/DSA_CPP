#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
vector<vector<int>> anagram(const vector<string> &A){
    vector<vector<int>> solution;
    
    unordered_map<string, vector<int>> umap;
    unordered_map<string, vector<int>>::iterator it;
    for (int i = 1; i <= A.size(); i++)
    {
        string s = A[i-1];
        sort(s.begin(), s.end());
        it = umap.find(s);
        if (it==umap.end())
        {
            umap.insert(make_pair(s, i));
            
        }
        else
        {
            //vector<int> crtsol;     
            //crtsol.push_back(it->second);
            //crtsol.push_back(i);
            //solution.push_back(crtsol);
            (it->second).push_back(i);
        }
    }
    for(auto it : umap){
        solution.push_back(it.second);
        //cout << ;
    }
    return solution;
}

int main(){
    vector<string> a = {"fsjt", "owkjg"};
    sort(a[1].begin(), a[1].end());
    cout << a[1];
}