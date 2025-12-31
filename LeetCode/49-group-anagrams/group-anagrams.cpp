
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<pair<string, string>> s;
        int ln = strs.size();

        for (int i = 0; i < ln; ++i)
        {
            int sz = strs[i].size();
            string second = strs[i];

            sort(strs[i].begin(), strs[i].end());
            string first = strs[i];

            s.push_back({first, second});
        }

        sort(s.begin(), s.end());

        vector<pair<string, string>> v;

        for (auto it : s)
        {
            v.push_back(it);
        }

        vector<vector<string>> out;

        int i = 0, j = 1;
        while ((i < j && i < ln) || i == 0)
        {
            vector<string> temp;
            temp.push_back(v[i].second);

            if (j >= ln)
            {
                out.push_back(temp);
                break;
            }

            while (j < ln && v[i].first == v[j].first)
            {
                temp.push_back(v[j].second);
                ++j;
            }
            out.push_back(temp);
            i = j;
            j++;
        }

        return out;
    }
};
