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
//	cout << "ת��ǰ��" << endl;
//	for (vector<char>::iterator iter = vec.begin(); iter != vec.end(); iter++)
//	{
//		cout << *iter << " ";
//	}
//	cout << endl;
//
//	Solution().reverseString(vec);
//
//	cout << "ת����" << endl;
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
//��дһ���������������ǽ�������ַ�����ת�����������ַ������ַ����� char[] ����ʽ������
//
//��Ҫ�����������������Ŀռ䣬�����ԭ���޸��������顢ʹ�� O(1) �Ķ���ռ�����һ���⡣
//
//����Լ��������е������ַ����� ASCII ����еĿɴ�ӡ�ַ���
//
//ʾ�� 1��
//
//���룺["h","e","l","l","o"]
//�����["o","l","l","e","h"]
//ʾ�� 2��
//
//���룺["H","a","n","n","a","h"]
//�����["h","a","n","n","a","H"]
//
//*/