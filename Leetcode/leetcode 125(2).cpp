//#include<iostream>
//#include<string>
//#include<cctype>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//	bool isPalindrome(string s) {
//		// 双指针
//		if (s.size() <= 1) return true;
//		int i = 0, j = s.size() - 1;
//		while (i < j) {
//			while (i < j && !isalnum(s[i])) // 排除所有非字母或数字的字符
//				i++;
//			while (i < j && !isalnum(s[j]))
//				j--;
//			if (tolower(s[i++]) != tolower(s[j--])) //统一转换成小写字母再比较
//				return false;
//		}
//		return true;
//	}
//};
//
//
//int main(void)
//{
//	//有序数组
//
//	/*string s = "A man, a plan, a canal: Panama";*/
//	string s = "A man, a plan, a canal -- Panama";
//
//	bool isPal = Solution().isPalindrome(s);
//	cout << "isPal = " << isPal << endl;
//
//	return 0;
//}