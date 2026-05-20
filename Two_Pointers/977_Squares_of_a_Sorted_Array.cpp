class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size(), left=0, right=n-1, pos=n-1;
        vector<int> res(n);
        while(left<=right){
            int l2=nums[left]*nums[left];
            int r2=nums[right]*nums[right];
            if(l2>r2){
                res[pos]=l2; left++;
            } 
            else{
                res[pos]=r2; right--;
            }
            pos--;
        }
        return res;
    }
};
