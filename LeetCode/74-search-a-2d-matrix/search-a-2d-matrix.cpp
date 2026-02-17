class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l= 0 , r= matrix[0].size()-1, id =-1;
        for (int i = 0  ; i < matrix.size();++i){
            if(target >= matrix[i][l] && target<=matrix[i][r]){
                id =i ;
                break ;
            }
        }

        if (id == -1)  return 0;

        for (int i = l ; i < r+1 ;++i){
            if(target == matrix[id][i])
            {
                return true;
            }
        }
        return false ;
    }
};