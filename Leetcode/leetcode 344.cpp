//#include<iostream>
//#include<vector>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//	void reverseString(vector<char>& s) {
//		int m = 0;
//		int n = s.size()-1;
//
//		while (m < n)
//			swap(s[m++], s[n--]);
//		
//
//		/*for (int i = 0; i < s.size()/2; i++)
//			swap(s[m++], s[n--]);
//		*/
//	}
//};
//
//int main(void)
//{
//	char s[] = { 'h','e','l','l','o' };
//
//	vector<char> vec(s, s + sizeof(s) / sizeof(char));
//	cout << "转换前：" << endl;
//	for (vector<char>::iterator iter = vec.begin(); iter != vec.end(); iter++)
//	{
//		cout << *iter << " ";
//	}
//	cout << endl;
//
//	Solution().reverseString(vec);
//
//	cout << "转换后：" << endl;
//	for (vector<char>::iterator iter = vec.begin(); iter != vec.end(); iter++)
//	{
//		cout << *iter << " ";
//	}
//
//	return 0;
//}
//
//
//
//
///*
//编写一个函数，其作用是将输入的字符串反转过来。输入字符串以字符数组 char[] 的形式给出。
//
//不要给另外的数组分配额外的空间，你必须原地修改输入数组、使用 O(1) 的额外空间解决这一问题。
//
//你可以假设数组中的所有字符都是 ASCII 码表中的可打印字符。
//
//示例 1：
//
//输入：["h","e","l","l","o"]
//输出：["o","l","l","e","h"]
//示例 2：
//
//输入：["H","a","n","n","a","h"]
//输出：["h","a","n","n","a","H"]
//
//*/