class Solution
{
public:
    bool validWordSquare(vector<string> &words)
    {
        int len = words.size();

        for (int j = 0; j < len; ++j)
        {
            string c{};

            for (int i = 0; i < len; ++i)
            {
                if (j < words[i].size())
                    c += words[i][j];
            }

            if (c != words[j])
                return false;
        }
        return true;
    }
};
