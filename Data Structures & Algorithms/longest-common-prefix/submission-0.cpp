class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str1 = ""; 

        for(int i= 0; i<strs[0].length(); i++){
            char ch = strs[0][i];

            for(int j=1; j<strs.size(); j++){
                if(i >= strs[j].length() || ch != strs[j][i]){
                    return str1;
                }
            }
            str1 = str1 + ch;
        }

        return str1;

    }
};