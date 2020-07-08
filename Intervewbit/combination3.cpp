#include<iostream>
#include<vector>
using namespace std;
void helper(int n, int k, vector<vector<int>> &solution, vector<int> crt, int i ){
    if(crt.size()==k) {
        solution.push_back(crt);
        return;
    }
    
    else crt.push_back(i++);
    int l = i;
    while (n - i )
        i++;
        helper(n, k, solution, crt, i);
    }
    helper(n, k, solution, crt, l++);
}

vector<vector<int>> combination (int n,int k){
    vector<vector<int>> solution;
    vector<int> crt;
    helper(n,k,solution,crt,0);
    return solution;
}

int main(){

}