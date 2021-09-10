//https://www.interviewbit.com/problems/commutable-islands/
//prims algorithm

#include <bits/stdc++.h>
using namespace std;

int find_min(vector<int>& weight, vector<int>& visited)
{
    int size = weight.size();
    int mi = INT_MAX;
    int v(0);
    for (int i = 0; i < size; i++)
    {
        if (weight[i] <= mi && !visited[i])
        {
            mi = weight[i];
            v = i;
        }
    }
    return v;
}
// void solver(vector<vector<int>> &adj_matrix, vector<int> &visited, vector<int> &parent, vector<int> &weight)
// {
//     for (int i = 0; i < adj_matrix.size(); i++)
//     {
//         //find vertex with min weight
//         int v = find_min(weight, visited);
//         visited[v] = 1;
//         for (int i = 0; i < adj_matrix.size(); i++)
//         {
//             if (adj_matrix[v][i] != -1 && !visited[i])
//             {
//                 //it is a neighbour
//                 if (weight[i] > adj_matrix[v][i])
//                 {
//                     weight[i] = adj_matrix[v][i];
//                     parent[i] = v;
//                 }
//             }
//         }
//     }
// }

void solver(vector<vector<int>> &adj_matrix, vector<int> &visited, vector<int> &parent, vector<int> &weight){
    int cur
}

int prims(int A, vector<vector<int>> &B)
{
    int min_cost(0);
    vector<vector<int>> adj_matrix(A, vector<int>(A, -1));
    vector<int> visited(A, 0);
    vector<int> parent(A, -1);
    vector<int> weight(A, INT_MAX);
    weight[0] = 0;
    //adj_matrix creation

    for (int i = 0; i < B.size(); i++)
    {
        adj_matrix[B[i][0] - 1][B[i][1] - 1] = B[i][2];
        adj_matrix[B[i][1] - 1][B[i][0] - 1] = B[i][2];
    }
    solver(adj_matrix, visited, parent, weight);
    //parent arrray is converted into min spanning tree
    //we have to return min cost which is the sum of the weight array
    for (int i = 0; i < weight.size(); i++)
    {
        min_cost += weight[i];
    }
    return min_cost;
}