class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<int, int> um;
        
        for(int i=0;i<sentence.size();i++){
            um[sentence[i]]++;
        }
        
        return (um.size()==26);
    }
};