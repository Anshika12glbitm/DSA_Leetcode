class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set <int> data;

        for(int n: nums)
        {
            if(data.count(n))
            {
                return true;
            }

            data.insert(n);
        }
        return false;
    }
};