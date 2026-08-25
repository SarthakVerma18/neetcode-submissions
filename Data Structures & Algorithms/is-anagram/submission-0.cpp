class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26] = {0};
        for(char e:s){
            arr[e-'a']++;
        }
        for(char f:t){
            arr[f-'a']--;
        }
        for(int i:arr){
            if(i!=0){
                return false;
            }
        }
        return true;
    }
};
