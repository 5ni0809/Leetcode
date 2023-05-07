#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int m = nums1.size(), n = nums2.size();
        int i = 0, j = 0, k = -1;
        vector<int> v(m + n, 0);
        while (i < m && j < n)
        {
            if (nums1[i] <= nums2[j])
                v[++k] = nums1[i++];
            else
                v[++k] = nums2[j++];
        }
        while (i < m)
            v[++k] = nums1[i++];
        while (j < n)
            v[++k] = nums2[j++];
        int sum = m + n;
        return sum % 2 ? v[sum / 2] : (v[sum / 2] + v[sum / 2 - 1]) / 2.0;
    }
};
int main(void)
{
    Solution s;
    vector<int> n1 = {1, 3};
    vector<int> n2 = {2};
    vector<int> n3 = {1, 2};
    vector<int> n4 = {3, 4};
    cout << s.findMedianSortedArrays(n1, n2) << endl;
    cout << s.findMedianSortedArrays(n3, n4);
}