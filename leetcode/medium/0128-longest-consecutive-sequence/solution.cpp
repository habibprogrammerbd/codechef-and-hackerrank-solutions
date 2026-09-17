class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        if(nums.size() == 0) return 0;

        set<int> st;
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++)
        {
            st.insert(nums[i]);
        }
        
        for(auto x : st)
        {
            ans.push_back(x);
            st.erase(x);
        }

        sort(nums.begin(),nums.end());

        vector<int> final_ans;
        int x = nums[0];

        for(int i = 0; i < nums.size(); i++)
        {
            if(ans[i] == x)
            {
                final_ans.push_back(ans[i]);
                x++;
            }
            else break;
        }

        return final_ans.size();
    }
};