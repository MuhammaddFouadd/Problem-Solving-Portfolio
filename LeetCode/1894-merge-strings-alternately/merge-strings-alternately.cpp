class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len1 = word1.size() ,len2 =word2.size();
        string merge = "";

        int one{} ,two{}; 
        while (one<len1 ||two <len2){
            if (one<len1){
                merge+=word1[one];
                ++one;
            }

            if (two<len2){
                merge+=word2[two];
                ++two;
            }
        }
        return merge;
    }
};