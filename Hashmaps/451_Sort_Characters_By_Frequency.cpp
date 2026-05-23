class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for(char c:s) freq[c]++;
        vector<pair<int, char>> sorted;
        for(auto& [c,cnt]:freq)
            sorted.push_back({cnt,c});
        sort(sorted.rbegin(), sorted.rend());
        string res;
        for(auto& [cnt,c]:sorted)
            res+=string(cnt,c);
        return res;
    }
};
