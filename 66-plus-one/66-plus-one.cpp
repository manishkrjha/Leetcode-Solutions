class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        if(digits[n-1]!=9){
            digits[n-1]++;
        }else{
            
            int carry = 1;
            
            for(int i=n-1;i>=0;i--){
                int x = carry + digits[i];
                digits[i] = x%10;
                carry = x/10;
            }
            
            if(carry>0){
                digits.insert(digits.begin(), carry);
            }
            
        }
        
        return digits;
    }
};