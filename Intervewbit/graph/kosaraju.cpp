#include<bits/stdc++.h>
using namespace  std;


class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
	void dfs(int V, vector<int> adj[], vector<int> & visited, int cur, stack<int> &s){
	    visited[cur] = true;
	    
	    for(int i = 0; i< adj[cur].size(); i++){
	        if(!visited[adj[cur][i]]){
	            dfs(V,adj, visited, adj[cur][i], s);
	        }
	    }
	    
	    s.push(cur);
	}
	
	void dfs_rev(int V, vector<vector<int>> &adj_rev, vector<int> & visited_rev, int cur){
	    visited_rev[cur] = true;
	    for(int i = 0; i< adj_rev[cur].size(); i++){
	        if(!visited_rev[adj_rev[cur][i]]){
	            dfs_rev(V,adj_rev, visited_rev, adj_rev[cur][i]);
	        }
	    }
	    
	}
    int kosaraju(int V, vector<int> adj[])
    {
        vector<vector<int>> adj_rev(V);
        stack<int> s;
        vector<int> visited(V, false);
        vector<int> visited_rev(V, false);
        int scc(0);
        
        for(int i= 0; i<V; i++){
            if(!visited[i]){
                dfs(V, adj, visited, i, s);
            }
        }
        //stack is created;
        
        for(int i = 0; i< V; i++){
            for (int j = 0; j < adj[i].size(); j++)
            {
                adj_rev[adj[i][j]].push_back(adj[i][0]);
            }
        }
        
        while(!s.empty()){
            int cur = s.top();
            s.pop();
            if(!visited_rev[cur]){
                dfs_rev(V, adj_rev, visited_rev, cur);
                scc++;
            }
           
            
        }
        
        return scc;

    
    }  
};
