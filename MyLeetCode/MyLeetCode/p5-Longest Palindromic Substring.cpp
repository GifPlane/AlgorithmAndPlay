/*
	1��������ȡ���������ַ���
	2����ת���е����ַ����������ȣ���¼���ĳ��ȣ����õ���ĳ���
	3��������Ļ����ϣ���������������Դ���ʡ����ʱ��
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
	/*�ҵķ���*/
	string longestPalindrome(string s) {
		string result;
		int max = 0;
		for (int i = 0; i < s.length(); ++i){
			for (int j = i; j < s.length(); ++j){
				if ((s[i] != s[j]) || max > j-i+1) { //������continue�ǳ���Ҫ������ִ��ʱ���Ǻܴ�ģ�
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

	/*��ת�ַ���*/
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