class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left =0,right=n-1,ans=0;
// we look for left<right as we get the idea of thea rea in which we can hold the water if left>right we cross the pointers and if left==right we have single bar wich cant contain water so left<right.
        while(left<right){   
//we took abs as the width is always +ve and never -ve !
            int width = abs(left-right);
//we took min(heights as the deciding factor of area of containg wayter depends on shorter bar.
            int h = min(height[left],height[right]);
// we consider max for ans as we want maximum amt of area to be calculated 
            ans= max(ans,width*h);
//here we are checking heights and acc to condition we will increment or decrement both right and left pointers.
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }                        
        }
        return ans;
    }
};