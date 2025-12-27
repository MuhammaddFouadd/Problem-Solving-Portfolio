class Solution
{
public:
    vector<int> replaceElements(vector<int> &arr)
    {
        vector<int> deq(arr.size(), -1);

        int maxi =-1;
        for (int i = arr.size() - 1; i >= 0; --i)
        {   
            deq[i] = maxi;
            maxi = max(maxi, arr[i]);
        }

        return deq;
    };
};