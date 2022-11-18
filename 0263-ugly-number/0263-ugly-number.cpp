class Solution {
public:
    bool isUgly(int n) {
        
        if(n<0){
            return false;
        }
        
        while(n>1)
        {
            bool flag = true;
            
            
            if(n%2==0){
                n/=2;
                flag = false;
            }
            
            if(n%3==0){
                n/=3;
                flag = false;
            }
            
            if(n%5==0){
                n/=5;
                flag = false;
            }
            
            if(flag){
                break;
            }
        }
        
        return (n==1);
    }
};