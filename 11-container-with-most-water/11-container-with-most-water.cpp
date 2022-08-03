class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int b,l;
        int area;
       int max_area=0;
        while(i<=j)
        {
            if(height[i]>height[j])
            {
                b=height[j];
            }
            else{
                b=height[i];
            }
            l=j-i;
            area=l*b;
            if(area>max_area)
            {
                max_area=area;
            }
              if(height[i]>height[j])
            {
                j--;
            }
            else if(height[j]>height[i]){
                i++;
            }
            else
            {
                i++;
                    j--;
            }
        }
        return max_area;
    }
};