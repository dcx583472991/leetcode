//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//
////��������
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
//	����һ���ַ����������ҳ����в������ظ��ַ��� ��Ӵ� �ĳ��ȡ�
//
//	ʾ�� 1:
//
//	����: "abcabcbb"
//	���: 3 
//	����: ��Ϊ���ظ��ַ�����Ӵ��� "abc"�������䳤��Ϊ 3��
//	ʾ�� 2:
//
//	����: "bbbbb"
//	���: 1
//	����: ��Ϊ���ظ��ַ�����Ӵ��� "b"�������䳤��Ϊ 1��
//	ʾ�� 3:
//
//	����: "pwwkew"
//	���: 3
//	����: ��Ϊ���ظ��ַ�����Ӵ��� "wke"�������䳤��Ϊ 3��
//		 ��ע�⣬��Ĵ𰸱����� �Ӵ� �ĳ��ȣ�"pwke" ��һ�������У������Ӵ���
//*/