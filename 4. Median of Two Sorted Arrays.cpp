class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        double ans = 0;
        while(i < nums2.size()){
            nums1.push_back(nums2[i]);
            i++;
        }
        sort(nums1.begin(), nums1.end());
        if(nums1.size() % 2 == 1) {
            return ans = nums1[nums1.size() / 2.0] ;
        }else{
            int idx = nums1.size() / 2;
            return ans = ( nums1[idx-1] + nums1[idx] ) / 2.0 ;
        }
    }
};
