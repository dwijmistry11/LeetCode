class Solution {
public:
    double average(vector<int>& salary) {
        
        double min = INT_MAX;
        double max = INT_MIN; 
        double sum = 0;
        int i;
        for(i= 0; i < salary.size();i++)
        {
            if (salary[i]<min) min = salary[i];
            if (salary[i]>max) max = salary[i];
            sum+=salary[i];
        }
        
        return (sum-min-max)/(i-2);
    }
};