class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int > data;
        vector<int> ans ;
        for(int i=0;i<nums.size();i++)
        {
            int first=nums[i];
            int second=target-first;

            if(data.find(second)!=data.end())
            {
                ans.push_back(i);
                ans.push_back(data[second]);
                break;
            }
            data[first]=i;//(2,0)
        }
        return ans;
    }
};