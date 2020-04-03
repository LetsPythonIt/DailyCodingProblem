class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> decompressed;
        // C1
        if ((nums.size() < 2) or (nums.size() > 100) or ((nums.size() % 2) != 0))
            return decompressed;
        
        // Create a decompressed list
        int length{nums.size()};
        
        for (int i{0}; i<length; i+=2){
            // // C3
            // if ((nums.at(i) < 1) or (nums.at(i) > 100) or (nums.at(i+1) < 1) or (nums.at(i+1) > 100)){
            //     vector<int> empty;
            //     return empty;
            // }
            for (int j{0}; j < nums.at(i); j++){
                decompressed.push_back(nums.at(i+1));
            }
        }
        
        return decompressed;
    }
};
