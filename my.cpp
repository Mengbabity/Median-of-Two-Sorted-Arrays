class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        
        vector<int> sum;
        for(int i=0;i<m;i++)
            sum.push_back(nums1[i]);
        
        for(int j=0;j<n;j++)
            sum.push_back(nums2[j]);
        
        sort(sum.begin(),sum.end());
        
        int s=n+m;
        if(s%2!=0)
            return (double)sum[s/2];
        else
            return (double)(sum[s/2]+sum[s/2-1])/2;
    }
};
