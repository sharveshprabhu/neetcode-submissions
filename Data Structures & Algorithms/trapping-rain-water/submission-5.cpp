class Solution {
public:
    int trap(vector<int>& height) {
        int l=0,r=height.size()-1;
        int lmax =height[l],rmax =height[r];
        int cap=0;
        while(l<r){
            if(lmax<rmax){
                l++;
                lmax = max(lmax,height[l]);
                cap+=lmax - height[l];
            }
            else{
                r--;
                rmax = max(rmax,height[r]);
                cap+=rmax-height[r];
            }
        }

        return cap;
    }
};
