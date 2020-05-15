#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main(){
    int t;
    cin >> t;
    unordered_map<int, int> umap;
    while(t--){
        int time(0);
        string path;
        cin >> path;
        for (int i = 0; i < path.length(); i++){
            auto it = umap.find(path[i]);
            if(it==umap.end()){
                time += 5;
            }
            else
            {
                time += 1;
            }
            
        }
        for (int i = 0; i < path.length(); i++)
        {
            auto it = umap.find(path[i]);
            if(it == umap.end()){
                umap.insert({path[i], 1});
                
            }
        }
        cout << time << endl;
    }
}