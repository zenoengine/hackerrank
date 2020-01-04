class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        ans.reserve(nums1.size());

        int im = 0, in = 0;
        while(m != im && n != in){
            if (nums1[im] < nums2[in]){
                ans.emplace_back(nums1[im]);
                im++;
            }
            else{
                ans.emplace_back(nums2[in]);
                in++;
            }
        }

        for(int i = im; im < m; im++){
            ans.emplace_back(nums1[im]);
        }

        for(int i = in; in < n; in++){
            ans.emplace_back(nums2[in]);
        }

        nums1 = ans;
    }
};