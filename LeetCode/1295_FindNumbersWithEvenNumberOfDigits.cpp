class Solution {
public:
    int findNumbers(vector<int>& nums);
};

int Solution::findNumbers(vector<int>& nums){
    
    int count{0};
    for (int i{0}; i < nums.size(); i++){
        int var{0};
        while (nums.at(i) != 0){
            nums.at(i) = nums.at(i) / 10;
            var ++;
        }
        if (var % 2 == 0)
            count ++;
    }
    return count;
}
