class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        
        int middle = start + (end - start) / 2;
        
        while (start <= end) {
            if (nums[middle] < target) {
                start = middle + 1;
            } else if (nums[middle] > target) {
                end = middle - 1;
            } else {
                break;
            }
            middle = start + (end - start) / 2;
        }
        return middle;
    }
};
