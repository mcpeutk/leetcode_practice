// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int start = 1;
        int end = n;
        int middle = start + (end - start) / 2;
        int res;
        while (start < end) {
            res = guess(middle);
            if (res < 0) {
                end = middle - 1;
            } else if (res > 0) {
                start = middle + 1;
            } else {
                break;
            }
            middle = start + (end - start) / 2;
        }
        return middle;
    }
};
