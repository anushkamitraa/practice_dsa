class Solution {
public:
    int numberOfSubstrings(string s) {
        int freq[3]={0,0,0};
        int left=0, cnt=0;
        for(int right=0; right<s.size(); right++){
            freq[s[right]-'a']++;
            while(freq[0] && freq[1] && freq[2]){
                cnt+=s.size()-right;
                freq[s[left]-'a']--;
                left++;
            }
        }
        return cnt;
    }
};
