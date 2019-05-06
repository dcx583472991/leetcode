//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//
////滑动窗口
//class Solution {
//public:
//	int lengthOfLongestSubstring(string s) {
//		/*int l = 0;
//		int r = -1;
//		int freq[256] = { 0 };
//		int res = 0;
//
//		while (l < s.size())
//		{
//			if (freq[s[r + 1]] == 0 && r+1<s.size())
//			{
//				freq[s[++r]] ++;
//			}
//			else 
//			{
//				freq[s[l++]] --;
//			}
//			res = max(res, r - l + 1);
//		}
//		return res;*/
//
//		int l = 0;
//		int r = -1;
//		int freq[256] = { 0 };
//		int res = 0;
//
//		while (l < s.size())
//		{
//			if (freq[s[r + 1]] == 0 && r + 1<s.size())
//			{
//				r++;
//				freq[s[r]]++;
//			}
//			else
//			{
//				freq[s[l]]--;
//				l++;
//			}
//			res = max(res, r - l + 1);
//		}
//		return res;
//	}
//};
//
//int main(void)
//{
//	string s = "pwwkew";
//
//	int res = Solution().lengthOfLongestSubstring(s);
//	cout << "res = " << res << endl;
//
//	return 0;
//}
///*
//	给定一个字符串，请你找出其中不含有重复字符的 最长子串 的长度。
//
//	示例 1:
//
//	输入: "abcabcbb"
//	输出: 3 
//	解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3。
//	示例 2:
//
//	输入: "bbbbb"
//	输出: 1
//	解释: 因为无重复字符的最长子串是 "b"，所以其长度为 1。
//	示例 3:
//
//	输入: "pwwkew"
//	输出: 3
//	解释: 因为无重复字符的最长子串是 "wke"，所以其长度为 3。
//		 请注意，你的答案必须是 子串 的长度，"pwke" 是一个子序列，不是子串。
//*/