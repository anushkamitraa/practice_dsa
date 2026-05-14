class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string newstr = "";
        for(int count = 0; count < strs[0].size(); count++){
            for(int i = 1; i < strs.size(); i++){
                if(strs[i][count] != strs[0][count])
                    return newstr; 
            }
            newstr += strs[0][count];
        }
        return newstr;
    }
};
