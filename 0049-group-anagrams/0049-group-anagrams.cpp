class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<int>> mp;
        
        for(int i=0;i<strs.size();i++){
            string tmp = strs[i];
            sort(tmp.begin(), tmp.end());
            
            mp[tmp].push_back(i);
        }
        
        vector<vector<string>> ans;
        for(auto it: mp){
            vector<string> v;
            
            for(int idx: it.second){
                v.push_back(strs[idx]);
            }
            
            ans.push_back(v);
        }
        
        return ans;
    }
};