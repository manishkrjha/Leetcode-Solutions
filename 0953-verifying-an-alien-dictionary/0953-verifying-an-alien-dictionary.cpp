class Solution {
public:
    
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char, int> um;
        
        for(int i=1;i<=26;i++){
            um[order[i]] = i;
        }
        
        for(int i=0;i<words.size();i++){
            string s1 = words[i];
            
            for(int j=i+1;j<words.size();j++){
                string s2 = words[j];
                
                int idx = 0;
                
                while(idx<s1.size() && idx<s2.size()){
                    if(um[s1[idx]]>um[s2[idx]]){
                        return false;
                    }
                    
                    if(um[s1[idx]]<um[s2[idx]]){
                        break;
                    }
                    
                    idx++;
                }
                
                if(idx == s2.size() && s2.size()<s1.size()){
                    return false;
                }
            }
        }
        
        return true;
    }
};