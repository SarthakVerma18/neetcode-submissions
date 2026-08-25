class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> ans;
        string tmp;
        for(int i=0;i<strs.size();i++){
            tmp = strs[i];
            sort(tmp.begin(),tmp.end());
            mp[tmp].push_back(strs[i]);
        }
        for(auto i: mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};
