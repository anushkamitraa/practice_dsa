class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> need, have;
        for(char c:t)   need[c]++;
        int formed=0, required=need.size(), left=0, minlen=INT_MAX, start=0;
        for(int right=0; right<s.size(); right++){
            have[s[right]]++;
            if(need.count(s[right]) && have[s[right]]==need[s[right]])
                formed++;
            while(formed==required){
                if(right-left+1 < minlen){
                    minlen=right-left+1;
                    start=left;
                }
                have[s[left]]--;
                if(need.count(s[left]) && have[s[left]]<need[s[left]])
                    formed--;
                left++;
            }
        }
        return minlen==INT_MAX ? "" : s.substr(start, minlen);
    }
};
