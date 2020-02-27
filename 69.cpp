class Solution {
public:
    int mySqrt(int x) {
        int start = 0;
        int end = x;
        
        int middle = x / 2;
        int flag = 0;
        
        unsigned long mult;
        
        while (start <= end) {
            mult = (unsigned long) middle * middle;
            if (mult < x) {
                start = middle + 1;
            } else if (mult > x) {
                end = middle - 1;
                flag = 1;
            } else {
                flag = 0;
                break;
            }
            middle = start + (end - start) / 2;
        }
        return middle - flag;
    }
};
