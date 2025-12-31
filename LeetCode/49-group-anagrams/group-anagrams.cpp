
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    map<string, vector<string>> st;
    int ln = strs.size();

    for (int i = 0; i < ln; ++i){
        string k = strs[i];
        sort(strs[i].begin(),strs[i].end());
        st[strs[i]].push_back(k);
    }

    vector <vector<string>> out ;
    for(auto it :st){
        out.push_back(it.second);
    }

    return out ;
}
};
