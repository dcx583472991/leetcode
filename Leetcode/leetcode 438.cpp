#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
	vector<int> findAnagrams(string s, string p) {
		int l = 0;
		int k = 0;
		vector<int> res;
		for (int i = 0; i < s.size(); i++)
		{
			for (int j = 0; j < p.size(); j++)
			{
				if (s[i] == p[j])
				{
					k++;
					break;
				}		
			}


			if (k >= 3 && s[i] != s[i-1] && s[i] != s[i-2] && s[i-1] != s[i-2])
			{
				res.push_back(i-2);
				k = 0;
			}
		}
		return res;
	}

	bool inString(char s, string p)
	{
		for (int i = 0; i < p.size(); i++)
			if (s == p[i])
				return true;
		return false;
	}
};

int main(void)
{
	string s = "abab";
	string p = "ab";

	vector<int> res = Solution().findAnagrams(s, p);
	for (int i = 0; i < res.size(); i++)
		cout << res[i] << " ";
	cout << endl;

	return 0;
}
/*
		����һ���ַ��� s ��һ���ǿ��ַ��� p���ҵ� s �������� p ����ĸ��λ�ʵ��Ӵ���������Щ�Ӵ�����ʼ������

	�ַ���ֻ����СдӢ����ĸ�������ַ��� s �� p �ĳ��ȶ������� 20100��

	˵����

	��ĸ��λ��ָ��ĸ��ͬ�������в�ͬ���ַ�����
	�����Ǵ������˳��
	ʾ�� 1:

	����:
	s: "cbaebabacd" p: "abc"

	���:
	[0, 6]

	����:
	��ʼ�������� 0 ���Ӵ��� "cba", ���� "abc" ����ĸ��λ�ʡ�
	��ʼ�������� 6 ���Ӵ��� "bac", ���� "abc" ����ĸ��λ�ʡ�
	 ʾ�� 2:

	����:
	s: "abab" p: "ab"

	���:
	[0, 1, 2]

	����:
	��ʼ�������� 0 ���Ӵ��� "ab", ���� "ab" ����ĸ��λ�ʡ�
	��ʼ�������� 1 ���Ӵ��� "ba", ���� "ab" ����ĸ��λ�ʡ�
	��ʼ�������� 2 ���Ӵ��� "ab", ���� "ab" ����ĸ��λ�ʡ�
