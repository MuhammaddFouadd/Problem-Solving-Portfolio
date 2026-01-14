class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sumPre {} , sumSu{};
        for(int i = 0 ; i < nums.size();++i){
            sumSu+=nums[i];
        }

        for(int i = 0 ; i < nums.size();++i){
            if (i!=0)
                sumPre += nums[i-1];
            
            sumSu-=nums[i];
            if (sumPre==sumSu)
                return i;
        }

        return -1;
    }
};