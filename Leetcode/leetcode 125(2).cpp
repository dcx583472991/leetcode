//#include<iostream>
//#include<string>
//#include<cctype>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//	bool isPalindrome(string s) {
//		// ˫ָ��
//		if (s.size() <= 1) return true;
//		int i = 0, j = s.size() - 1;
//		while (i < j) {
//			while (i < j && !isalnum(s[i])) // �ų����з���ĸ�����ֵ��ַ�
//				i++;
//			while (i < j && !isalnum(s[j]))
//				j--;
//			if (tolower(s[i++]) != tolower(s[j--])) //ͳһת����Сд��ĸ�ٱȽ�
//				return false;
//		}
//		return true;
//	}
//};
//
//
//int main(void)
//{
//	//��������
//
//	/*string s = "A man, a plan, a canal: Panama";*/
//	string s = "A man, a plan, a canal -- Panama";
//
//	bool isPal = Solution().isPalindrome(s);
//	cout << "isPal = " << isPal << endl;
//
//	return 0;
//}