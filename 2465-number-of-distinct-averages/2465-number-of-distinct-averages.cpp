class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        int n  = nums.size();
        int left = 0;
        int right = n-1;
        sort(nums.begin(),nums.end());

        set<double> averages;
        
        while(left<right){
            double avg = (nums[left] + nums[right]) / 2.0;
            averages.insert(avg);            
            left++;
            right--;
        }
        return averages.size();
    }
};