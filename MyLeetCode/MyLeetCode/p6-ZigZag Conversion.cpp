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

		// 打印第一行,每一组有2*numRows-2个                                                                          
		int interval = 2 * (numRows - 1);
		for (int i = 0; i < s.length(); i += interval) {
			res += s[i];
		}
		// 打印中间行                                                                 
		for (int row = 1; row < numRows - 1; row++) {
			for (int i = row, j = 0; i < s.length(); j += interval, i = j - i) {
				res += s[i];
			}
		}
		// 打印最后一行                                                                     
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