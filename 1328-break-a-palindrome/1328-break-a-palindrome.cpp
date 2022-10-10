class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n = palindrome.size();
        
        if(n==1){
            return "";
        }
        
        int i = 0, j = n-1;
        
        while(i<j){
            if(palindrome[i]!='a'){
                palindrome[i]='a';
                return palindrome;
            }else{
                i++;
                j--;
            }
        }
        
        palindrome[n-1] = 'b';
        
        return palindrome;
    }
};