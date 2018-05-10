#include<iostream>

using namespace std;

static const void* ___ = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	return nullptr;
}();

class Solution {
public:
	string convert(string s, int numRows) {
		if (numRows == 1) {
			return s;
		}

		std::string res;
		res.reserve(s.size());

		// ��ӡ��һ��,ÿһ����2*numRows-2��                                                                          
		int interval = 2 * (numRows - 1);
		for (int i = 0; i < s.length(); i += interval) {
			res += s[i];
		}
		// ��ӡ�м���                                                                 
		for (int row = 1; row < numRows - 1; row++) {
			for (int i = row, j = 0; i < s.length(); j += interval, i = j - i) {
				res += s[i];
			}
		}
		// ��ӡ���һ��                                                                     
		if (numRows > 1) {
			for (int i = numRows - 1; i < s.length(); i += interval) {
				res += s[i];
			}
		}
		return res;

	}
};

void main() {
	Solution so;
	so.convert("123",3);

	system("pause");
}