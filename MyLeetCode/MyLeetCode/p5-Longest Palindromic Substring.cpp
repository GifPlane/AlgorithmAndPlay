/*
	1、遍历并取得所有子字符串
	2、翻转所有的子字符串，如果相等，记录他的长度，最后得到最长的长度
	3、在上面的基础上，添加跳过条件可以大大节省运行时间
*/

#include<iostream>
#include<vector>
#include<string>

using namespace std;

static const auto _____ = []()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	return nullptr;
}();

class Solution {
public:
	/*我的方案*/
	string longestPalindrome(string s) {
		string result;
		int max = 0;
		for (int i = 0; i < s.length(); ++i){
			for (int j = i; j < s.length(); ++j){
				if ((s[i] != s[j]) || max > j-i+1) { //这两个continue非常重要，否则执行时间是很大的！
					continue;
				}
				string sb = s.substr(i, j - i+1);
				string sbR = Reverse(sb);
				if (sb == sbR){
					if (sb.length() > max) {
						max = sb.length();
						result = sb;
					}
				}
			}
		}
		return result;
	}

	/*反转字符串*/
	string Reverse(string s) {
		for (int i = 0; i < s.length() / 2; ++i){
			char temp = s[i];
			s[i] = s[s.length() - i - 1];
			s[s.length() - i - 1] = temp;
		}
		return s;
	}
};

void main(){
	Solution so;
	string s = so.longestPalindrome("eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee");
	cout << s << endl;
	system("pause");
}