//#include<iostream>
//#include<vector>
//#include <algorithm>
//using namespace std;
//
//
////暴力解法，超时
//class Solution {
//public:
//	int maxArea(vector<int>& height) {
//
//		for (vector<int>::iterator iter = height.begin(); iter != height.end(); iter++)
//		{
//			cout << *iter << " ";
//		}
//		cout << endl;
//
//		int n = height.size() - 1;
//		int liter = 0;
//		int max = 0;
//		for (int i = 0; i <= n; i++)
//		{
//
//			for (int j = i + 1; j <= n; j++) 
//			{
//				liter = (j - i)*min(height[i], height[j]);
//				cout << "liter = " << liter << endl;
//				if (liter > max)
//					max = liter;
//			}
//
//		}
//		return max;
//	}
//};
//
//int main(void)
//{
//	int s[] = { 1,8,6,2,5,4,8,3,7 };
//	vector<int> vec(s, s + sizeof(s) / sizeof(int));
//
//	int maxliter = Solution().maxArea(vec);
//
//	cout << "maxliter = " << maxliter;
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