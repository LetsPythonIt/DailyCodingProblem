class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int Index[2] = {0, 1};
        int head = INT_MIN;
        
//         for (int i{0}; i < height.size(); i++){
//             for (int j = i+1; j < height.size(); j++){

//                 if (min(height[i], height[j])*abs(i-j) > head){
//                     head = min(height[i], height[j])*abs(i-j);
//                     Index[0] = i; Index[1] = j;
//                 }
//             }
//         }
        
        for (int i=0, j = height.size()-1; i < j;){
            head = max(head, (j-i)*min(height[i], height[j]));
            height[i] < height[j] ? i++:j--;
        }
        return head;
    }
};
