#include<iostream>
#include<vector>
#include<algorithm>

char get(std::string s, int i);

using namespace std;

class Solution {
public:
	/*LeetCode 第一名*/
	int lengthOfLongestSubstring(std::string s)
	{
		int flags[256];//为什么这个数组要有256位，因为它实际上记录数组中每一个字符最后出现的位置，而在ascii码中，一共有256个字符。
		for (int i = 0; i < 256; i++)
			flags[i] = -1;

		int longest = 0;
		int j = 0; //j用来遍历字符串
		int collision = -1; //碰撞、冲突?
		while (s[j] != 0)
		{
			//flags[s[j]] 表示当前字符在之前最后出现在的位置， 为什么用它来判断呢？因为只要它的值不等于-1，
			//就说明这个字符在之前有出现过了，所以肯定是发生了冲突。然后再去记录最后发生冲突的位置
			if (flags[s[j]] != -1) 
				collision = (collision > flags[s[j]] ? collision : flags[s[j]]); //得到和第几个位置发生冲突
			flags[s[j]] = j; //1、更新s[j]这个字符最后出现的位置为当前位置
			longest = (j - collision > longest ? j - collision : longest); //当前位置 - 最后一次发生冲突的位置，如果大于最长距离，那他肯定是最长距离。
			j++;
		}
		return longest;
	}

	char get(string s, int i){
		return s[i];
	}

	/*这个是我的答案*/
	//int lengthOfLongestSubstring(std::string s) {
	//	std::vector<char> subString;
	//	std::vector<char>::iterator it;
	//	int i = 0;
	//	int max = 0;
	//	for (int j = 0; j < s.length(); ++j){
	//		for (int k = j; k < s.length(); ++k) {
	//			it = find(subString.begin(), subString.end(), s[k]);
	//			if (it == subString.end()) {
	//				subString.push_back(s[k]);
	//				++i;
	//				if (i>max) max = i;
	//			}else {
	//				subString.clear();
	//				i = 0; break;
	//			}
	//		}
	//	}
	//	return max;
	//}
};

void main() {
	Solution so;
	//int sum = so.lengthOfLongestSubstring("dvdvddf");
	//int sum = so.lengthOfLongestSubstring("000000");
	int sum = so.lengthOfLongestSubstring("dvddvvddf");
	std::cout << sum <<std::endl;
	system("pause");
}