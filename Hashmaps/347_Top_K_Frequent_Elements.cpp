class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int n:nums) freq[n]++;
        vector<vector<int>> bucket(nums.size()+1);
        for(auto& [val,cnt]:freq)
            bucket[cnt].push_back(val);
        vector<int> res;
        for(int i=bucket.size()-1; i>=0 && res.size()<k; i--)
            for(int n:bucket[i])
                if(res.size()<k)
                    res.push_back(n);
        return res;
    }
};
