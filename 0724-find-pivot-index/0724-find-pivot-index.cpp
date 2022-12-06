class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0,leftSum=0;
        int size = nums.size();
        for(auto i : nums)
        {
            sum+=i;
        }
        for(int i=0; i<size; i++)
        {
            if(leftSum == sum-nums[i]) return i;
            else{
                leftSum += nums[i];
                sum-=nums[i];
            }
        }
        
        return -1;
    }
};