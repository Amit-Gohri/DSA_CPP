//https://www.interviewbit.com/problems/cycle-in-directed-graph/
#include<bits/stdc++.h>
using namespace std;

// int dfs(vector<vector<int>> &adj, vector<int> visited, int crt)
// {
//     if (visited[crt] == true)
//     {
//         // loop found
//         return 1;
//     }
//     visited[crt] = true;
//     for (int i = 1; i < adj[crt].size(); i++)
//     {
//         if(dfs(adj,visited, adj[crt][i])){
//             return 1;
//         }
//     }
//     return 0;
// }


// int dfs(vector<vector<int>> &adj, vector<int> &visited, int crt){
//     if (visited[crt] == true)
//     {
//         return true;
//     }
//     visited[crt] = true;
//     for (int i = 1; i < adj[crt].size(); i++)
//     {
//         if(dfs(adj, visited, adj[crt][i])){
//             return 1;
//         }
//     }
    
//     visited[crt] = false;
    
    
//     return 0;   
// }

// int solve(int A, vector<vector<int> > &B) {
//     //converting matrix representation to list representation
//     vector<vector<int>> adj_list(A);
//     vector<int> visited(A, 0);
//     for (int i = 0; i < A; i++)
//     {
//         adj_list[i].push_back(i);
//     }
//     for (int i = 0; i < B.size(); i++)
//     {
//         adj_list[B[i][0] - 1].push_back(B[i][1]-1);
        
//     }
//     // for (int i = 0; i < B.size(); i++)
//     // {
//     //    if(dfs(adj_list, visited, i)){
//     //        return true;
//     //    }
//     // }
//     // return false;
//     return dfs(adj_list, visited, 0);       
// }




class Solution
{
    public:
	//Function to detect cycle in a directed graph.
	
	bool cycleUtil(int V, vector<int> adj[], vector<int> &visited, int cur){
	    if(visited[cur] == true){
	       return true;
	    }
	    
	    visited[cur] = true;
                    
	    for(int i = 0; i<adj[cur].size(); i++){
	        if(cycleUtil(V,adj, visited, adj[cur][i])){
	            return true;
	        }
            else
                visited[adj[cur][i]] = false;
        }
	    visited[cur] = false;
	    return 0;
	}
	bool isCyclic(int V, vector<int> adj[]) 
	{
	    vector<int> visited(V, false);
	    for(int i = 0; i< V; i++){
	        if (!visited[i])
            {
                if (cycleUtil(V, adj, visited, i))
                {
                    return true;
                }
                
            }
            
	    }
	    
	   	return false;
	   	
	}
};  
