//#include<iostream>
//#include<vector>
//#include <algorithm>
//using namespace std;
//
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
//		int m = 0;
//		int n = height.size() - 1;
//		int liter = 0;
//		int max = 0;
//		
//		while(m < n) 
//		{
//			//	{ 1,8,6,2,5,4,8,3,7 }
//			cout << "height[" << m << "] = " << height[m] << "  ";
//			cout << "height[" << n << "] = " << height[n] << endl;
//
//			liter = (n - m)*min(height[m], height[n]);
//			cout << "liter = " << liter << ", ";
//			if (liter > max)
//				max = liter;
//			if (height[m] < height[n])
//				m++;
//			else
//				n--;
//
//			cout << "max = " << max << endl << endl;
//				
//		}
//			
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