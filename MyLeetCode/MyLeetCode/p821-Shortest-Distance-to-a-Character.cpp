/*
	给定一个字符串 S 和一个字符 C。返回一个代表字符串 S 中每个字符到字符串 S 中的字符 C 的最短距离的数组。

	示例 1:

	输入: S = "loveleetcode", C = 'e'
	输出: [3, 2, 1, 0, 1, 0, 0, 1, 2, 2, 1, 0]
	说明:

	字符串 S 的长度范围为 [1, 10000]。
	C 是一个单字符，且保证是字符串 S 里的字符。
	S 和 C 中的所有字母均为小写字母。
*/

#include<iostream>
#include<vector>
#include<map>
#include<math.h>

using namespace std;

class Solution {
public:
	vector<int> shortestToChar(string S, char C) {
		vector<int> temp;
		vector<int> res;
		/*记录C的位置*/
		for (int i = 0; i < S.length(); ++i){
			if (S[i] == C){
				temp.push_back(i);
			}
		}
		/*遍历整个字符串，比较位置并取出最小值*/
		for (int i = 0; i < S.length(); ++i){
			int smaller = abs(i - temp[0]); 
			for (int j = 0; j < temp.size();++j) {
				if (abs(i - temp[j]) < smaller) {
					smaller = abs(i - temp[j]); 
				}
			}
			res.push_back(smaller);
		}
		return res;
	}
};

void main() {
	Solution so;
	vector<int> res = so.shortestToChar("aaab", 'b');
	for each (auto i in res)
	{
		cout << i << " ";
	}
	cout << endl;

	system("pause");
}