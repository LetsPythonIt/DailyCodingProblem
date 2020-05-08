// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        bool isBad{false};
        
        // for (int i=1; i <= n; i++){
        //     if (isBadVersion(i)) return i;
        // }
        
        // Go check the midpoint
        // If midpoint is correct, go check the right midpoint
        // If midpoint is bad, go check the left midpoint.
        // Keep doing this until left < right
        
        int left = 1;
        int right = n;
        int mid = 1;
        
        while (left < right){
            mid = left + (right-left)/2;
            if (isBadVersion(mid)) right = mid;
            else left = mid+1;
        }
        
        return left;
    }
};
