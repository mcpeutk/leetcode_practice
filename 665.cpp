class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int count = 0;
        int curr_num = nums[0];
        
        for (int i = 0; i < nums.size() - 1; i++) {
            if (curr_num > nums[i + 1]) {
                count += 1;
                
                if (count > 1) {
                    return false;
                }
            }
            
            if (i != 0 && nums[i - 1] >= nums[i + 1]) {
                curr_num = nums[i] > nums[i + 1] ? nums[i] : nums[i + 1];
            } else {
                curr_num = nums[i + 1];
            }
        }
        
        return true;
    }
};
