class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum=0, l=0, r=num.size()-1;
        while(l<r){
            sum=nums[l]+nums[r];
            if(sum==target) return{left+1, right+1};
            else if(sum<target) l++;
            else r--;
        }
        return {};
        
    }
};
