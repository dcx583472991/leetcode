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
//			mid = (r + l) / 2;
//			if (target == nums[mid])
//			{
//				cout << "l = " << l << endl;
//				cout << "mid = " << mid << endl;
//				cout << "r = " << r << endl;
//				return mid;
//			}
//			if (target < nums[mid])
//				r = mid - 1;
//			if (target > nums[mid])
//				l = mid + 1;
//			
//		}
//		if (target < nums[mid])
//		{
//			nums.insert(nums.begin() + mid, target);
//			return mid;
//		}
//		else 
//		{
//			nums.insert(nums.begin() + mid + 1, target);
//			return mid + 1;
//		}	
//
//	}	
//};
//int main(void)
//{
//	int nums[] = { 1, 3, 5, 6, 8 };	//	0,1,2,3,4
//	int target = 3;
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