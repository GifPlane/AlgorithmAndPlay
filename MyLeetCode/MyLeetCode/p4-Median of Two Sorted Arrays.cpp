#include<iostream>
#include<vector>

using namespace std;

static const auto _____ = []()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	return nullptr;
}();
/*求两个排序数组的中间值*/
class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		vector<int> nums3;
		vector<int>::iterator i1 = nums1.begin();
		vector<int>::iterator i2 = nums2.begin();
		while (i1 != nums1.end() || i2 != nums2.end()) {
			if (i1 != nums1.end() && i2 != nums2.end()){
				if (*(i1) <= *(i2)) {
					nums3.push_back(*(i1));
					i1++;
				}
				else{
					nums3.push_back(*(i2));
					i2++;
				}
			}
			else if (i1 == nums1.end() && i2 != nums2.end()){
				nums3.push_back(*(i2));
				i2++;
			}
			else if (i1 != nums1.end() && i2 == nums2.end()){
				nums3.push_back(*(i1));
				i1++;
			}
		}
		int size = nums3.size();
		double madin;
		if (size % 2 == 0) {
			madin = (double)(nums3[size / 2] + nums3[size / 2 - 1]) / 2;
			cout << nums3[size / 2] << " " << nums3[size / 2 - 1] << endl;
		}
		else {
			madin = nums3[size / 2];
		}
		return madin;
	}
};

void main(){
	vector<int> v1 = { 2, 4 };
	vector<int> v2 = { 3, 5 };
	Solution so;
	double d = so.findMedianSortedArrays(v1, v2);
	cout << d << " " << endl;
	system("pause");
}