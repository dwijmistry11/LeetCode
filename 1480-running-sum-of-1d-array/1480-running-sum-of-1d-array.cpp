class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;
        int old = 0;
        for(auto i = nums.begin(); i != nums.end(); i++ ){
            result.push_back(*i + old);
            old =  *i + old;
        }
        return result;
    }
};


