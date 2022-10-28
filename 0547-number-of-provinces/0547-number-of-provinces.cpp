class Solution {
public:
    void dfs(vector<vector<int>> &adj, int node, vector<int> &vis){
        
        for(int i=0;i<adj[node].size();i++){
            if(adj[node][i] == 1 && vis[i+1]==0){
                vis[i+1] = 1;
                dfs(adj, i, vis);
            }
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<int> vis(isConnected.size()+1, 0);
        int cnt = 0;
        
        for(int i=0;i<isConnected.size();i++){
            if(!vis[i+1]){
                cnt++;
                vis[i+1] = 1;
                dfs(isConnected, i, vis);
            }
        }
        
        return cnt;
    }
};