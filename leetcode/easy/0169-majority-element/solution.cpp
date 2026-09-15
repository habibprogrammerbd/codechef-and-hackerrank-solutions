class Solution {
public:
    int majorityElement(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int x = 0,y = 0;
        int ans = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] % 2 == 0) x++;
            else y++;
        }

        if(x > y)
        {
            for(int i = 0; i < nums.size(); i++)
            {
                if(nums[i] % 2 == 0) ans = nums[i];
                break;
            }
        }
        else
        {
            for(int i = 0; i < nums.size(); i++)
            {
                if(nums[i] % 2 != 0) ans = nums[i];
                break;
            }
        }

        return ans;
    }
};