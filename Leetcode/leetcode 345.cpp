//#include<iostream>
//#include<vector>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//	string reverseVowels(string s) {
//		int m = 0;
//		int n = s.size() - 1;
//		
//		while (m < n)
//			if (isVowels(s[m]) && isVowels(s[n]))
//				swap(s[m++], s[n--]);
//			else if (!isVowels(s[n]))
//				n--;
//			else
//				m++;
//
//		return s;
//	}
//
//	bool isVowels(char vow)
//	{
//		char Vowels[] = { 'a','e','i','o','u','A', 'E','I','O', 'U' };
//		/*string Vowels[] = { "a","e","i","o","u" };*/
//
//		for (int i = 0; i <= 9; i++)
//			if (vow == Vowels[i])
//				return true;
//
//		return false;
//	}
//};
//
//int main(void)
//{
//	string s = "hello";
//
//	s = Solution().reverseVowels(s);
//
//	for (string::iterator iter = s.begin(); iter != s.end(); iter++)
//	{
//		cout << *iter << " ";
//	}
//	cout << endl;
//
//	return 0;
//}
//
//
//
//
///*
//
//
//*/