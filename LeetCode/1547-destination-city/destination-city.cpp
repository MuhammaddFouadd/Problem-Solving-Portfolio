class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int len = paths.size();
        unordered_map <string,string> path;

        for (int i = 0 ; i < len ; ++i){
            path[paths[i][0]]=paths[i][1];
        }

        for (int i = 0 ; i < len ; ++i){
            if (path.find(paths[i][1])==path.end())
                return paths[i][1];
        }

        return " " ;
    }
};