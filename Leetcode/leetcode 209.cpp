//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	int minSubArrayLen(int s, vector<int>& nums) {
//
//		int l = 0;
//		int r = -1;
//		int len = nums.size();
//		int res = len+1;
//		int sum = 0;
//		while (l < len)
//		{
//			if (sum < s && r + 1 < len)
//				sum += nums[++r];
//			else
//				sum -= nums[l++];
//
//			if (sum >= s)
//				res = min(res, r - l + 1);
//		}
//		
//		if (res == nums.size() + 1)
//			return 0;
//		return res;
//	}
//};
//
//int main(void)
//{
//	int arr[] = { 2, 3, 1, 2, 4, 3 };
//	int s = 7;
//	vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));
//	
//	int res = Solution().minSubArrayLen(s, vec);
//	cout << "res = " << res << endl;
//	
//	return 0;
//}