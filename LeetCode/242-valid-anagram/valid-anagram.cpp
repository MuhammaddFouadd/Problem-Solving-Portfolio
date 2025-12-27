class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<long long> v1(1e5, 0);
        vector<long long> v2(1e5, 0);
        for (int i = 0; i < s.size(); ++i) {
        ++v1[s[i]];
        }
        
        for (int i = 0; i < t.size(); ++i) {
        ++v2[t[i]];
        }

        for (int i = 0 ; i < v1.size() ; ++i){
            if (v1[i]!=v2[i])
                return false ;
        }

        return true ;
    }
};