class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int start = 0;
        int end = A.size() - 1;
        int middle = start + (end - start) / 2;
        
        while (start <= end) {
            if (A[middle] > A[middle - 1] && A[middle] > A[middle + 1]) {
                return middle;
            } else if (A[middle] < A[middle + 1]) {
                start = middle + 1;
            } else {
                end = middle - 1;
            }
            middle = start + (end - start) / 2;
        }
        return middle;
    }
};
