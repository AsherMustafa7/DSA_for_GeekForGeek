class Solution {
  public:
    int kthElement(vector<int> &nums1, vector<int> &nums2, int k) {
        // code here
        vector<int>v;
        int r= 0;
        int l=0;
        while(l<nums1.size() && r<nums2.size())
        {
            if(nums1[l]<=nums2[r])
            {
                v.push_back(nums1[l]);
                l++;
            }
            else
            {
                v.push_back(nums2[r]);
                r++;
            }
        }
        if(l<nums1.size())
        {
            while(l<nums1.size())
            {
                v.push_back(nums1[l]);
                l++;
            }
        }
        if(r<nums2.size())
        {
            while(r<nums2.size())
            {
                v.push_back(nums2[r]);
                r++;
            }
        }
        
        return v[k-1];
    }
};