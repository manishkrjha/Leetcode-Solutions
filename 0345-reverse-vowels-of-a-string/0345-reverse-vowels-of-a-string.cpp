class Solution {
public:
    bool isVowel(char c){
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
    }
    
    string reverseVowels(string s) {
        string vowel = "";
        
        for(int i=0;i<s.size();i++){
            if(isVowel(s[i])){
                vowel.push_back(s[i]);
            }
        }
        
        int idx = vowel.size()-1;
        
        for(int i=0;i<s.size();i++){
            if(isVowel(s[i])){
                s[i] = vowel[idx];
                idx--;
            }
        }
        
        return s;
    }
};