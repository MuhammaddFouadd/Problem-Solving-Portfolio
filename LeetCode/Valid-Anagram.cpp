1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        vector<long long> v1(1e5, 0);
5        vector<long long> v2(1e5, 0);
6        for (int i = 0; i < s.size(); ++i) {
7        ++v1[s[i]];
8        }
9        for (int i = 0; i < t.size(); ++i) {
10        ++v2[t[i]];
11        }
12
13        for (int i = 0 ; i < v1.size() ; ++i){
14            if (v1[i]!=v2[i])
15                return false ;
16        }
17
18        return true ;
19    }
20};