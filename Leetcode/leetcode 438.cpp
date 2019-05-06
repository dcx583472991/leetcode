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
		给定一个字符串 s 和一个非空字符串 p，找到 s 中所有是 p 的字母异位词的子串，返回这些子串的起始索引。

	字符串只包含小写英文字母，并且字符串 s 和 p 的长度都不超过 20100。

	说明：

	字母异位词指字母相同，但排列不同的字符串。
	不考虑答案输出的顺序。
	示例 1:

	输入:
	s: "cbaebabacd" p: "abc"

	输出:
	[0, 6]

	解释:
	起始索引等于 0 的子串是 "cba", 它是 "abc" 的字母异位词。
	起始索引等于 6 的子串是 "bac", 它是 "abc" 的字母异位词。
	 示例 2:

	输入:
	s: "abab" p: "ab"

	输出:
	[0, 1, 2]

	解释:
	起始索引等于 0 的子串是 "ab", 它是 "ab" 的字母异位词。
	起始索引等于 1 的子串是 "ba", 它是 "ab" 的字母异位词。
	起始索引等于 2 的子串是 "ab", 它是 "ab" 的字母异位词。
