#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;
int main(){
    int no_of_key_to_buy(0);
    int no_of_rooms(0);
    cin >> no_of_rooms;
    //string s;
    //cin >> s;
    //int size = s.size();
    unordered_map<char, int> umap;
    unordered_map<char, int>::iterator it;
    for (int i = 1; i <= 2*no_of_rooms-2; i++)
    {
        char c;
        cin >> c;
        if(i%2==0){
            //i is even  it is a door
            it = umap.find(c + 32);
            if(it == umap.end())
                no_of_key_to_buy++; //nahi mila
            else
                // chabi mil gayi chabi ko delete kro;
                umap.erase(c + 32);
                continue;
        }
        else{
            //i is odd it is a key
            umap.insert(make_pair(c, i));
        }
    }
    cout << no_of_key_to_buy << endl;
}
