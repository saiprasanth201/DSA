class Solution {
    public:
        int trap(vector<int>& height) {
            int left = 0, right = height.size()-1;
            int leftmax = 0, rightmax =0;
            int trapped = 0;
            while(left<right){
                leftmax = max(leftmax,height[left]);
                rightmax = max(rightmax,height[right]);
    
                if(leftmax < rightmax){
                    trapped += leftmax-height[left]; left++;
                }else{
                    trapped += rightmax-height[right]; right--;
                }
            }
            return trapped;
        }
    };