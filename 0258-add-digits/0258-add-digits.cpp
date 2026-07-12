class Solution {
public:
    int addDigits(int num) 
    {
        while(num>=10)
        {
            int rem,ans=0;
            while(num!=0)
            {
                rem=num%10;
                ans+=rem;
                num=num/10;
            }
            num=ans;
        }
        return num;
    }
};