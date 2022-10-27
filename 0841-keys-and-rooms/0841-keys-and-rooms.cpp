class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<int> vis(n, 0);
        
        queue<int> q;
        q.push(0);
        vis[0] = 1;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            for(int itr: rooms[node]){
                if(!vis[itr]){
                    vis[itr] = 1;
                    q.push(itr);
                }
            }
        }
        
        for(int i=0;i<n;i++){
            if(!vis[i]){
                return false;
            }
        }
        
        return true;
    }
};