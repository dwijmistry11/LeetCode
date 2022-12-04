class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        // simple method
        //time O(n^2)
        //space O(1)
        
        int n = nums.size();
        for(int i =0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(nums[i]+nums[j] == target)
                {
                    return {i,j};
                }
            }
        }
        return {-1,-1};//will never reach
    }
};