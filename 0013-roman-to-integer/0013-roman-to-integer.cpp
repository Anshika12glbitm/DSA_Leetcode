class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        int n = s.length();

        for(int i=0;i<n-1;i++)
        {
            int current = get_value(s[i]);
            int next = get_value(s[i+1]);

            if(current < next)
            {
               ans-= current ;
            }
            else{
                ans+= current;
            }
        }
        ans += get_value(s[n-1]);

        return ans;
    }

    private: 
    inline int get_value(char c)
    {
        switch(c)
        {
            case'I' : return 1;
            case'V' : return 5;
            case'X' : return 10;
            case'L':  return 50;
            case'C' : return 100;
            case 'D' : return 500;
            case 'M' : return 1000;
            default : return 0;
        }
    }
};