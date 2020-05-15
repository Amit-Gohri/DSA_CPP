#include<iostream>
#include<unordered_map>
using namespace std;
int numJewelsInStones(string J, string S) {
        unordered_map<char,char> umap;
        int result = 0;
        unordered_map<char,char>::iterator it;
        for(int x=0; x<J.length();x++){
            umap.insert(make_pair(J[x],'J'));
        }
        for(int x= 0;x<S.length();x++){
            it = umap.find('S[x]');
            if(it!=umap.end()) result++;
            
        }
        return result;
    }
int main(){

    cout<<numJewelsInStones("aA", "aAAbbbb");

}