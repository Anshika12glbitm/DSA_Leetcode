class Solution {
public:
        int find_first_occurrence(vector<int>&nums,int target)
        {
            int high = nums.size()-1;
            int low = 0;
            int ans = -1;

            while(low<=high)
            {
                int mid = low + (high - low) / 2;
                if(nums[mid] == target)
                {
                    ans = mid;
                    high = mid-1;
                }
                else if(nums[mid]<target)
                {
                    low = mid +1;
                }
                else 
                {
                    high = mid-1;
                }
            }
             return ans;
        }

        int find_second_occurrence(vector<int>&nums,int target)
        {
            int low =0;
            int high = nums.size()-1;
            int ans=-1;

            while(low<=high)
            {
                int mid = low +(high -low)/2 ;

                if(nums[mid] == target)
                {
                    ans = mid;
                    low = mid+1;
                }
                else if(nums[mid]<target)
                {
                    low = mid +1 ;
                }
                else
                {
                    high = mid-1;
                }
            }
            return ans;
        }
    vector<int> searchRange(vector<int>& nums, int target)
     {
        return {find_first_occurrence(nums,target),find_second_occurrence(nums,target)};
    }
};