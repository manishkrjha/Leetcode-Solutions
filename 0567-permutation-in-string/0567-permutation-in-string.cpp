class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq(26, 0);
        
        for(int i=0;i<s1.size();i++){
            freq[s1[i]-'a']++;
        }
        
        vector<int> tmp(26, 0);
        
        int i = 0;
        int j = 0;
        
        while(j<s2.size()){
            tmp[s2[j]-'a']++;
            
            if(j-i+1 != s1.size()){
                j++;
            }else{
                bool flag = true;
                
                for(int k=0;k<26;k++){
                    if(freq[k]!=tmp[k]){
                        flag = false;
                        break;
                    }
                }
                
                if(flag){
                    return true;
                }
                
                tmp[s2[i]-'a']--;
                i++;
                j++;
            }
        }
        
        return false;
    }
};