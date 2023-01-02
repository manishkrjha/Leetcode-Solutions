class Solution {
public:
    bool detectCapitalUse(string word) {
        int fl = word[0];
        
        bool case1 = true, case2 = true, case3 = true;
        
        if(fl>=65 && fl<=90){
            for(int i=1;i<word.size();i++){
                if(word[i]>=65 && word[i]<=90){
                    continue;
                }else{
                    case1 = false;
                    break;
                }
            }
            
            if(case1){
                return true;
            }
            
            for(int i=1;i<word.size();i++){
                if(word[i]>=97 && word[i]<=122){
                    continue;
                }else{
                    case2 = false;
                    break;
                }
            }
            
            if(case2){
                return true;
            }
            
        }else{
            for(int i=1;i<word.size();i++){
                if(word[i]>=97 && word[i]<=122){
                    continue;
                }else{
                    case3 = false;
                    break;
                }
            }
            
            if(case3){
                return true;
            }
        }
        
        return false;
    }
};