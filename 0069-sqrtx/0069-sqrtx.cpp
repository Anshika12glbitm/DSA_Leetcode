class Solution {
public:
    int mySqrt(int x) {

        if(x<4)
        {
            return (x==0)?0:1;
        }
        int start = 2;
        int end = x/2;
        int mid=0;
        int ans=0;

        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(mid<=x/mid)
            {
             ans = mid;
             start = mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return ans;
    }
};