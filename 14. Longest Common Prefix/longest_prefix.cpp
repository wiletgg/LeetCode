class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return"";
        for(int i = 0; i < strs[0].size(); i++){ //กวาดคำ
            char c = strs[0][i];
            for(int j = 1; j < strs.size(); j++){ //เปรียบเทียบคำอื่น
                if(i == strs[j].size() || strs[j][i] != c){ //check 
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0];
        }
};
