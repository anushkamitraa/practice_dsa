class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for(int n:nums){
            int idx=abs(n)-1;
            nums[idx]=-abs(nums[idx]);
        }
        vector<int> res;
        for(int i=0; i<nums.size(); i++)
            if(nums[i]>0)   res.push_back(i+1);

        return res;
    }
};
