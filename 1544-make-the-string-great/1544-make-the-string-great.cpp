class Solution {
public:
    string makeGood(string s) {
        
        while(s.size()){
            
            cout << s << "\n";
            
            bool flag = false;
            for(int i=0;i<s.size()-1;i++){
                if(abs(s[i]-s[i+1])==abs('a'-'A')){
                    flag = true;
                    s.erase(i, 2);
                    break;
                }
            }
            
            if(!flag){
                return s;
            }
        }
        
        return s;
    }
};