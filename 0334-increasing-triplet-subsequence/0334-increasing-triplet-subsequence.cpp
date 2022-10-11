class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size()<3){
            return false;
        }
        
        vector<int> pre(nums.size(), 0);
        vector<int> post(nums.size(), 0);
        
        pre[0] = nums[0];
        post[nums.size()-1] = nums[nums.size()-1];
        
        for(int i=1;i<nums.size()-1;i++){
            pre[i] = min(nums[i], pre[i-1]);
        }
        
        for(int i=nums.size()-2;i>=0;i--){
            post[i] = max(nums[i], post[i+1]);
        }
        
        for(int i=1;i<nums.size()-1;i++){
            if(pre[i-1]<nums[i] && post[i+1]>nums[i]){
                return true;
            }
        }
        
        return false;
    }
};