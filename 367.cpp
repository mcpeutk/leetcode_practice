class Solution {
public:
    bool isPerfectSquare(int num) {
        int start = 1;
        int end = num;
        int middle = start + (end - start) / 2;
        long unsigned mult;
        while (start < end) {
            mult = (long unsigned) middle * middle;
            if (mult == num) {
                return true;
            } else if (mult < num) {
                start = middle + 1;
            } else {
                end = middle - 1;
            }
            middle = start + (end - start) / 2;
        }
        if ((long unsigned) start * start == num) {
            return true;
        }
        return false;
    }
};
