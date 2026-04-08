class Solution {
public:
    void dfs(int i,vector<vector<int>>& adj,vector<int>& vis){
        vis[i]=1;
        for(int node:adj[i]){
            if(!vis[node]){
                dfs(node,adj,vis);
            }
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        int count=0;
        vector<int>vis(n,0);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i,adj,vis);
                count++;
            }
        }
        return count;
    }
};
