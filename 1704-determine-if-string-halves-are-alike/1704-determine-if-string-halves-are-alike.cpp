class Solution {
public:
    bool halvesAreAlike(string s) {
        
        int cnt = 0;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                
                if(i<s.size()/2){
                    cnt++;
                }else{
                    cnt--;
                }
                
            }
        }
        
        return (cnt==0);
    }
};