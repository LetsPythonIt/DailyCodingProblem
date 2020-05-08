class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
//         /// O(n3) time
//         int closest = INT_MAX;
//         int sum = INT_MIN;
        
//         for (int i=0; i<nums.size(); i++){
//             for (int j=0; j<nums.size(); j++){
//                 for (int k=0; k<nums.size(); k++){
//                     if ((i != j) && (j != k) && (i != k)){
                        
//                         if (abs(target - (nums[i] + nums[j] + nums[k])) < closest){
//                             closest = abs(target - (nums[i] + nums[j] + nums[k]));
//                             sum = nums[i] + nums[j] + nums[k];
//                         }
//                         // std::cout << sum << " : " << nums[i] << " " << nums[j] << " " << nums[k] << std::endl;
//                     }
//                 }
//             }
//         }
        
        
        // O(n2) time
        
        std::sort(nums.begin(), nums.end()); // Sort the numbers
        int result = nums[0] + nums[1] + nums[2];
        
        for (int i=0; i<nums.size()-2; i++){
            int S = i+1;
            int E = nums.size()-1;
            
            while (S<E){
                int currentSum = nums[i] + nums[S] + nums[E];
                if (abs(currentSum-target) < abs(result-target)) result = currentSum;
                if (currentSum < target) S++;
                else E--;
            }
        }
        
        return result;
    }
};
