class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow=0;
        for(int n:nums){
            if(slow<2 || n!=nums[slow-2]){
                nums[slow]=n;
                slow++;
            }
        }
        return slow;
    }
};
