class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> pre(nums.size(), 0);
        vector<int> post(nums.size(), 0);
        
        pre[0] = nums[0];
        post[nums.size()-1] = nums[nums.size()-1];
        
        for(int i=1;i<nums.size();i++){
            pre[i] += (pre[i-1] + nums[i]);
        }
        
        for(int i=nums.size()-2;i>=0;i--){
            post[i] += (post[i+1] + nums[i]);
        }
        
        for(int i=0;i<nums.size();i++){
            int ls=0, rs=0;
            
            if(i-1>=0){
                ls = pre[i-1];
            }
            
            if(i+1<nums.size()){
                rs = post[i+1];
            }
            
            if(rs==ls){
                return i;
            }
        }
        
        return -1;
    }
};