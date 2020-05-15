#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> mainfunc(int n) {
        vector<vector<int>> solutions;
        //vector<string> board(n, string(n, '.'));
        solve_nQueen(0, n, ,solutions );
        return solutions;
}

bool validation(vector<int> queens_positions_placed_till_now)
{  
    //for vertical validation, all values(position) should be different

    //for diagnol validation diff btw index should not be equal to diff btw values
    
}

void solve_nQueen(int row, int n, vector<int> crt_placement_of_queens, vector<vector<int>> &solutions){
    if(row == n){
        solutions.push_back(crt_placement_of_queens); //pushes the current positions to the solution vector
    //print the solution........
        
    }
    else
    {
        for (int col = 0; col < n; col++){
            //place the queeen at column and check if this is valid or not
            if(validation()){            //if the position is valid then add this position into a crt position vector
                crt_placement_of_queens.push_back(col);
                solve_nQueen(row + 1, n, crt_placement_of_queens, solutions);
            }
        }
    }
    
}


int main()
{

}