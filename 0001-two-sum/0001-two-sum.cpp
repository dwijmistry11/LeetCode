class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> ans;
        for (auto a = nums.begin(); a != nums.end(); ++a)
        {
            if(a != nums.end())
            {
                for(auto b = a+1; b != nums.end(); ++b )
                {
                    if((*a + *b) == target)
                    {
                        ans.push_back(a-nums.begin());
                        ans.push_back(b-nums.begin());
                        break;
                    }
                }
            }
        }
        return ans;
    }
};