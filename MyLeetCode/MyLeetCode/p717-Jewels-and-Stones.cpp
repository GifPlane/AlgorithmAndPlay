#include<iostream>
#include<string>

using namespace std;

/*
	��ʯ��ʯͷ
	��ʵ������Ⱪ���������ˣ�Ҳ������ʲô�����������,����ƽ��һ���ַ����������ﵽ���ϰ����
	������Ŀ���Ʋ�����50�������Ծ���������������
	��������ķ���1ֻ����J�ַ���û���ظ�����������ã���������ظ��ͻ���ִ���
	����2ʹ����һ���κ����
*/
class Solution {
public:
	/*
		����1���������
		���Ӷ�ΪO(m*n)
	*/
	//int numJewelsInStones(string J, string S) {
	//	int sum = 0;
	//	for (int i = 0; i < S.length(); ++i){
	//		for (int k = 0; k < J.length(); ++k){
	//			if (S[i] == J[k]){
	//				sum++;
	//			}
	//		}
	//	}
	//	return sum;
	//}

	/*
		����2���Ż����ÿռ��滻ʱ��
		���Ӷ�Ϊ��O(m+n)
	*/
	int numJewelsInStones(string J, string S) {
		//'A' ASCII code is 65
		//'z' ASCII code is 122

		bool jewels[58]; //Ϊʲô��58 ��Ϊ 122-65 + 1 = 58
		memset(jewels, false, sizeof(jewels)); //���ķ�ʽ������jewelsȫ��Ϊfalse
		for (int i = 0; i < J.length(); i++) {
			jewels[J[i] - 65] = true; //��J�г��ֵı�ʶλ����Ϊtrue
		}
		int result = 0;
		for (int i = 0; i < S.length(); i++) {
			if (jewels[S[i] - 65]) { //s[i] - 65�õ�0~57����ֵ�����S���ֹ�����ô��˵���ҵ�һ����ʯ�ˣ�
				result++;
			}
		}
		return result;
	}
};

void main(){
	Solution so;
	int num = so.numJewelsInStones("qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM", 
		"HUESAHHUANGJIJINGWENHUANGJINGWENHUANGJISdsaufenfeasdejnapfenfejisadjJIFHAUjiasjdenanfeapsjdehfnasjdnixdjeifhaujsidjiedaonsudjueaAdefjigehafjefbeufEFAFGDEFAMSKAJDIWEHFEIFNASJHNDUIEFHABNSJDNHUESAHHUANGJIJINGWENHUANGJINGWENHUANGJISdsaufenfeasdejnapfenfejisadjJIFHAUjiasjdenanfeapsjdehfnasjdnixdjeifhaujsidjiedaonsudjueaAdefjigehafjefbeufEFAFGDEFAMSKAJDIWEHFEIFNASJHNDUIEFHABNSJDNHUESAHHUANGJIJINGWENHUANGJINGWENHUANGJISdsaufenfeasdejnapfenfejisadjJIFHAUjiasjdenanfeapsjdehfnasjdnixdjeifhaujsidjiedaonsudjueaAdefjigehafjefbeufEFAFGDEFAMSKAJDIWEHFEIFNASJHNDUIEFHABNSJDNHUESAHHUANGJIJINGWENHUANGJINGWENHUANGJISdsaufenfeasdejnapfenfejisadjJIFHAUjiasjdenanfeapsjdehfnasjdnixdjeifhaujsidjiedaonsudjueaAdefjigehafjefbeufEFAFGDEFAMSKAJDIWEHFEIFNASJHNDUIEFHABNSJDNHUESAHHUANGJIJINGWENHUANGJINGWENHUANGJISdsaufenfeasdejnapfenfejisadjJIFHAUjiasjdenanfeapsjdehfnasjdnixdjeifhaujsidjiedaonsudjueaAdefjigehafjefbeufEFAFGDEFAMSKAJDIWEHFEIFNASJHNDUIEFHABNSJDNHUESAHHUANGJIJINGWENHUANGJINGWENHUANGJISdsaufenfeasdejnapfenfejisadjJIFHAUjiasjdenanfeapsjdehfnasjdnixdjeifhaujsidjiedaonsudjueaAdefjigehafjefbeufEFAFGDEFAMSKAJDIWEHFEIFNASJHNDUIEFHABNSJDNHUESAHHUANGJIJINGWENHUANGJINGWENHUANGJISdsaufenfeasdejnapfenfejisadjJIFHAUjiasjdenanfeapsjdehfnasjdnixdjeifhaujsidjiedaonsudjueaAdefjigehafjefbeufEFAFGDEFAMSKAJDIWEHFEIFNASJHNDUIEFHABNSJDNHUESAHHUANGJIJINGWENHUANGJINGWENHUANGJISdsaufenfeasdejnapfenfejisadjJIFHAUjiasjdenanfeapsjdehfnasjdnixdjeifhaujsidjiedaonsudjueaAdefjigehafjefbeufEFAFGDEFAMSKAJDIWEHFEIFNASJHNDUIEFHABNSJDNHUESAHHUANGJIJINGWENHUANGJINGWENHUANGJISdsaufenfeasdejnapfenfejisadjJIFHAUjiasjdenanfeapsjdehfnasjdnixdjeifhaujsidjiedaonsudjueaAdefjigehafjefbeufEFAFGDEFAMSKAJDIWEHFEIFNASJHNDUIEFHABNSJDNHUESAHHUANGJIJINGWENHUANGJINGWENHUANGJISdsaufenfeasdejnapfenfejisadjJIFHAUjiasjdenanfeapsjdehfnasjdnixdjeifhaujsidjiedaonsudjueaAdefjigehafjefbeufEFAFGDEFAMSKAJDIWEHFEIFNASJHNDUIEFHABNSJDNHUESAHHUANGJIJINGWENHUANGJINGWENHUANGJISdsaufenfeasdejnapfenfejisadjJIFHAUjiasjdenanfeapsjdehfnasjdnixdjeifhaujsidjiedaonsudjueaAdefjigehafjefbeufEFAFGDEFAMSKAJDIWEHFEIFNASJHNDUIEFHABNSJDNHUESAHHUANGJIJINGWENHUANGJINGWENHUANGJISdsaufenfeasdejnapfenfejisadjJIFHAUjiasjdenanfeapsjdehfnasjdnixdjeifhaujsidjiedaonsudjueaAdefjigehafjefbeufEFAFGDEFAMSKAJDIWEHFEIFNASJHNDUIEFHABNSJDNHUESAHHUANGJIJINGWENHUANGJINGWENHUANGJISdsaufenfeasdejnapfenfejisadjJIFHAUjiasjdenanfeapsjdehfnasjdnixdjeifhaujsidjiedaonsudjueaAdefjigehafjefbeufEFAFGDEFAMSKAJDIWEHFEIFNASJHNDUIEFHABNSJDNHUESAHHUANGJIJINGWENHUANGJINGWENHUANGJISdsaufenfeasdejnapfenfejisadjJIFHAUjiasjdenanfeapsjdehfnasjdnixdjeifhaujsidjiedaonsudjueaAdefjigehafjefbeufEFAFGDEFAMSKAJDIWEHFEIFNASJHNDUIEFHABNSJDNHUESAHHUANGJIJINGWENHUANGJINGWENHUANGJISdsaufenfeasdejnapfenfejisadjJIFHAUjiasjdenanfeapsjdehfnasjdnixdjeifhaujsidjiedaonsudjueaAdefjigehafjefbeufEFAFGDEFAMSKAJDIWEHFEIFNASJHNDUIEFHABNSJDNHUESAHHUANGJIJINGWENHUANGJINGWENHUANGJISdsaufenfeasdejnapfenfejisadjJIFHAUjiasjdenanfeapsjdehfnasjdnixdjeifhaujsidjiedaonsudjueaAdefjigehafjefbeufEFAFGDEFAMSKAJDIWEHFEIFNASJHNDUIEFHABNSJDNHUESAHHUANGJIJINGWENHUANGJINGWENHUANGJISdsaufenfeasdejnapfenfejisadjJIFHAUjiasjdenanfeapsjdehfnasjdnixdjeifhaujsidjiedaonsudjueaAdefjigehafjefbeufEFAFGDEFAMSKAJDIWEHFEIFNASJHNDUIEFHABNSJDNHUESAHHUANGJIJINGWENHUANGJINGWENHUANGJISdsaufenfeasdejnapfenfejisadjJIFHAUjiasjdenanfeapsjdehfnasjdnixdjeifhaujsidjiedaonsudjueaAdefjigehafjefbeufEFAFGDEFAMSKAJDIWEHFEIFNASJHNDUIEFHABNSJDNHUESAHHUANGJIJINGWENHUANGJINGWENHUANGJISdsaufenfeasdejnapfenfejisadjJIFHAUjiasjdenanfeapsjdehfnasjdnixdjeifhaujsidjiedaonsudjueaAdefjigehafjefbeufEFAFGDEFAMSKAJDIWEHFEIFNASJHNDUIEFHABNSJDNHUESAHHUANGJIJINGWENHUANGJINGWENHUANGJISdsaufenfeasdejnapfenfejisadjJIFHAUjiasjdenanfeapsjdehfnasjdnixdjeifhaujsidjiedaonsudjueaAdefjigehafjefbeufEFAFGDEFAMSKAJDIWEHFEIFNASJHNDUIEFHABNSJDNHUESAHHUANGJIJINGWENHUANGJINGWENHUANGJISdsaufenfeasdejnapfenfejisadjJIFHAUjiasjdenanfeapsjdehfnasjdnixdjeifhaujsidjiedaonsudjueaAdefjigehafjefbeufEFAFGDEFAMSKAJDIWEHFEIFNASJHNDUIEFHABNSJDNHUESAHHUANGJIJINGWENHUANGJINGWENHUANGJISdsaufenfeasdejnapfenfejisadjJIFHAUjiasjdenanfeapsjdehfnasjdnixdjeifhaujsidjiedaonsudjueaAdefjigehafjefbeufEFAFGDEFAMSKAJDIWEHFEIFNASJHNDUIEFHABNSJDNHUESAHHUANGJIJINGWENHUANGJINGWENHUANGJISdsaufenfeasdejnapfenfejisadjJIFHAUjiasjdenanfeapsjdehfnasjdnixdjeifhaujsidjiedaonsudjueaAdefjigehafjefbeufEFAFGDEFAMSKAJDIWEHFEIFNASJHNDUIEFHABNSJDNHUESAHHUANGJIJINGWENHUANGJINGWENHUANGJISdsaufenfeasdejnapfenfejisadjJIFHAUjiasjdenanfeapsjdehfnasjdnixdjeifhaujsidjiedaonsudjueaAdefjigehafjefbeufEFAFGDEFAMSKAJDIWEHFEIFNASJHNDUIEFHABNSJDNHUESAHHUANGJIJINGWENHUANGJINGWENHUANGJISdsaufenfeasdejnapfenfejisadjJIFHAUjiasjdenanfeapsjdehfnasjdnixdjeifhaujsidjiedaonsudjueaAdefjigehafjefbeufEFAFGDEFAMSKAJDIWEHFEIFNASJHNDUIEFHABNSJDNHUESAHHUANGJIJINGWENHUANGJINGWENHUANGJISdsaufenfeasdejnapfenfejisadjJIFHAUjiasjdenanfeapsjdehfnasjdnixdjeifhaujsidjiedaonsudjueaAdefjigehafjefbeufEFAFGDEFAMSKAJDIWEHFEIFNASJHNDUIEFHABNSJDNHUESAHHUANGJIJINGWENHUANGJINGWENHUANGJISdsaufenfeasdejnapfenfejisadjJIFHAUjiasjdenanfeapsjdehfnasjdnixdjeifhaujsidjiedaonsudjueaAdefjigehafjefbeufEFAFGDEFAMSKAJDIWEHFEIFNASJHNDUIEFHABNSJDNHUESAHHUANGJIJINGWENHUANGJINGWENHUANGJISdsaufenfeasdejnapfenfejisadjJIFHAUjiasjdenanfeapsjdehfnasjdnixdjeifhaujsidjiedaonsudjueaAdefjigehafjefbeufEFAFGDEFAMSKAJDIWEHFEIFNASJHNDUIEFHABNSJDNHUESAHHUANGJIJINGWENHUANGJINGWENHUANGJISdsaufenfeasdejnapfenfejisadjJIFHAUjiasjdenanfeapsjdehfnasjdnixdjeifhaujsidjiedaonsudjueaAdefjigehafjefbeufEFAFGDEFAMSKAJDIWEHFEIFNASJHNDUIEFHABNSJDNaAAbbbbjenfuASJPFAOPSFIEFNJEFNASHDUEFHNAJNDSJDADSJAIDSUDIEANJSNXJDHAOIHEUHFUAOSJDIOEWAIefhajfnsajfbchufheufanfkaajsdjaipeUJHFNAOHFA");
	cout << num << endl;
	system("pause");
}