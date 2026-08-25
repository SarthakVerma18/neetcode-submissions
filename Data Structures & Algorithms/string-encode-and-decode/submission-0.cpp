class Solution {
public:
    vector<int> freq; // stores sizes of strings

    string encode(vector<string>& strs) {
        if (strs.empty()) return "";

        freq.resize(strs.size()); // Allocate freq size
        string s = strs[0];
        freq[0] = strs[0].size();

        for (int i = 1; i < strs.size(); i++) {
            s += strs[i];
            freq[i] = strs[i].size();
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int pos = 0;

        for (int len : freq) {
            result.push_back(s.substr(pos, len));
            pos += len;
        }
        return result;
    }
};
