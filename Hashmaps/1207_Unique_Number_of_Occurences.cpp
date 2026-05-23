class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        for(int n:arr)  freq[n]++;
        unordered_set<int> freqSet;
        for(auto& [val,cnt]:freq)
            freqSet.insert(cnt);
        return freqSet.size()==freq.size();
    }
};
