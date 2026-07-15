class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxend=nums[0];
        int minend=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            int curr=nums[i];
            int prevmax=maxend;
            int prevmin=minend;
            maxend=max({curr,curr*prevmax,curr*prevmin});
            minend=min({curr,curr*prevmax,curr*prevmin});
            ans=max(ans,maxend);
        }
        return ans;
    }
};
