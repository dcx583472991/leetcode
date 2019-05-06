//#include<iostream>
//#include<vector>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//	int searchInsert(vector<int>& nums, int target) {
//		int l = 0;
//		int r = nums.size() - 1;
//		int mid = 0;
//		while (l <= r)
//		{
//			cout << "l -> " << l << ", mid -> " << mid << ", r -> " << r << endl;
//			mid = (r + l) / 2;
//			
//			if (target == nums[mid])
//				return mid;
//			if (target < nums[mid])
//				r = mid - 1;
//			if (target > nums[mid])
//				l = mid + 1;
//		}
//		return l;
//
//	}
//};
//int main(void)
//{
//	int nums[] = { 1, 3, 5 ,6,8 };	//	0,1,2,3,4
//	int target = 100;
//	vector<int> vec(nums, nums + sizeof(nums) / sizeof(int));
//
//	int p = Solution().searchInsert(vec, target);
//	cout << "p = " << p << endl;
//
//	for (int i = 0; i < vec.size(); i++)
//	{
//		cout << vec[i] << " ";
//	}
//
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