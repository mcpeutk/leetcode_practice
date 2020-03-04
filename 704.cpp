class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int middle = start + (end - start) / 2;
        
        while (start < end) {
            if (target < nums[middle]) {
                end = middle - 1;
            } else if (target > nums[middle]) {
                start = middle + 1;
            } else {
                return middle;
            }
            middle = start + (end - start) / 2;
        }
        if (nums[start] == target) {
            return start;
        } else {
            return -1;
        }
        return middle;
    }
};
