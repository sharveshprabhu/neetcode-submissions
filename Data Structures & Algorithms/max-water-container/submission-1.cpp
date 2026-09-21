class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0,r=heights.size()-1;
        int vol=0;
        int maxvol=0;
        while(l<r){
            vol = abs(l-r)*min(heights[l],heights[r]);
            if(vol>maxvol){
                maxvol = vol;
            }
            else{
                heights[l]<heights[r]?l++:r--;
            }
        }
        return maxvol;
    }
};
