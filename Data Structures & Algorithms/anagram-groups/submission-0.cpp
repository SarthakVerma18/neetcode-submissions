class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> m;
        for (string s : strs) {
            vector<int> freq(26, 0);
            for (char c : s) {
                freq[c - 'a']++;
            }
            m[freq].push_back(s);
        }

        vector<vector<string>> result;
        for (const auto& pair : m) {
            result.push_back(pair.second);
        }
        return result;
    }
};
