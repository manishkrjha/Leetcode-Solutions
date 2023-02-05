class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        vector<int> freq(26, 0);
        
        for(int i=0;i<p.size();i++){
            freq[p[i]-'a']++;
        }
        
        vector<int> tmp(26, 0);
        
        int i=0, j=0;
        
        while(j<s.size()){
            tmp[s[j]-'a']++;
            
            if(j-i+1 != p.size()){
                j++;
            }else{
                bool flag = true;
                
                for(int k=0;k<26;k++){
                    if(tmp[k]!=freq[k]){
                        flag = false;
                        break;
                    }
                }
                
                if(flag){
                    ans.push_back(i);
                }
                
                tmp[s[i]-'a']--;
                i++;
                j++;
            }
        }
        
        return ans;
    }
};