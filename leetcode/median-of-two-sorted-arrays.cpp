class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> merged;
        
        int idx1 = 0;
        int idx2 = 0;
        
        while(idx1 < nums1.size() || idx2 < nums2.size())
        {
            if (idx1 >= nums1.size())
            {
                merged.push_back(nums2[idx2]);
                idx2++;
                continue;
            }
            
            if (idx2 >= nums2.size())
            {
                merged.push_back(nums1[idx1]);
                idx1++;
                continue;
            }
            
            if (nums1[idx1] > nums2[idx2])
            {
                merged.push_back(nums2[idx2]);
                idx2++;
            }
            else
            {
                merged.push_back(nums1[idx1]);
                idx1++;
            }
        }
        
        double median = 0;
        if (merged.size()%2 == 0)
        {
            int leftIdx = merged.size()/2 - 1;
            int rightIdx = merged.size()/2;
            median = double(merged[leftIdx] + merged[rightIdx])/2;
        }
        else
        {
            int midIdx = merged.size()/2;
            median = merged[midIdx];
        }
        return median;
    }
};