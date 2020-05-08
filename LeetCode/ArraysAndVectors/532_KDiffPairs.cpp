class Solution {
public:
//     int findPairs(vector<int>& nums, int k) {
//         std::set<std::pair<int, int>> uniquePairs;
        
//         for (int i=0; i<nums.size();i++){
//             for (int j=i+1; j<nums.size(); j++){
//                 if (( uniquePairs.find({nums[j],nums[i]}) == uniquePairs.end()) && (abs(nums[i]-nums[j]) == k)){// If a swapped version is already there
//                         uniquePairs.insert({nums[i], nums[j]});
//                 }
//             }
//         }
//         return uniquePairs.size();
//     }
    
    int findPairs(vector<int>& nums, int k) {
        unordered_set<string> visited;
        unordered_set<int> table;
        if(k < 0) return 0;
        
        for(auto num: nums){
            if(table.count(num + k)) visited.insert(to_string(num) + " " + to_string(num + k));
            if(table.count(num - k)) visited.insert(to_string(num - k) + " " + to_string(num));
            table.insert(num);
        }
        
        return visited.size();
    }
};
