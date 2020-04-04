#include<iostream>
#include<vector>
using namespace std;
void solve (int i, int t, vector<int> crt_set, vector<int> &A, vector < vector<int>> &solution ){
    //if crt set is the subset then add crtset to solution
    if(t == A.size()) 
    {
        crt_set.push_back(A[t-1]);
        solution.push_back(crt_set);
    }
//     if(i!=0)
//     {
//         if(t==0)
//             solution.push_back(crt_set);
//         else crt_set.push_back(A[t-1]);
//     }
//     solve(1, t + 1, crt_set, A, solution);
//     solve(0, t + 1, crt_set, A, solution);
        if(t==0)
            solution.push_back(crt_set);
        else{
             crt_set.push_back(A[t-1]); 
            solve(1, t + 1, crt_set, A, solution);
            solve(0, t + 1, crt_set, A, solution);
        }




 }

vector<vector<int> > subsets(vector<int> &A) {
    vector < vector<int>> solution;
    vector<int> subset;
    //call solve
    solve(1, 0, subset, A, solution);
    return solution;
}
int main(){
    vector<int> A;
    vector<vector<int>> ans;
    A.push_back(2);
    A.push_back(3);
    ans = subsets(A);
}
