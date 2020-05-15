#include<iostream>
#include<vector>
using namespace std;

void help_rec(int n, int k, int i, int j, vector<int> crt_comb, vector<vector<int>> &solution){
    //if size of arr is 0,1;
    if(k==0 || n==0)
        return;
    // if(n==1){
    //     crt_comb.push_back(1);
    //     solution.push_back(crt_comb);
    //     return;
    // }
    if(crt_comb.size()==k) {
        solution.push_back(crt_comb);
        return;
    }
    else{
        
        for (; j <= n; j++){
            //crt_comb.push_back(j);
            help_rec(n, k, i, j, crt_comb, solution);
        }
    }
}
vector<vector<int>> combination(int n, int k)
{
    vector<vector<int>> solution;   // contain combination
    vector<int> com;    //comb that will be pushed into solution 
    help_rec(n, k, 1, 2, com , solution);
    return solution;
}


int main(){

}