#include <iostream>
#include<vector>
//#include<algorithm>
//#include<iterator>
using namespace std;
void helper(int n,int k,vector<vector<int>> &solution, vector<int> crt){
    if(crt.size()==k) {
        solution.push_back(crt);
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        vector<int>::iterator it = find(crt.begin(), crt.end(), i);
        if(it==crt.end()){
            crt.push_back(i);
            helper(n, k, solution, crt);
        }
        //if i is not in crt then push in crt call func aggain
        //else continue
        else
            continue;
    }
    
}





vector<vector<int>> combination (int n,int k){
    vector<vector<int>> solution;
    vector<int> crt;
    helper(n,k,solution,crt);
    return solution;
}
int main(){
    

}
