#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string, int> umap={{"klvskv",3},{"kns",6}};
    umap["GeeksforGeeks"] = 10;
    cout << umap["kns"];
    unordered_map<string, int>::iterator it = umap.begin();
    cout<<it->first;
    it++;
    cout << it->first;
    it = umap.find("knsdfs");
    if(it==umap.end())
        cout << "m";
}