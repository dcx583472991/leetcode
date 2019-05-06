//#include<iostream>
//#include<vector>
//using namespace std;
//
///*
//	执行用时 : 12 ms, 在Merge Sorted Array的C++提交中击败了97.03% 的用户
//	内存消耗: 8.7 MB, 在Merge Sorted Array的C++提交中击败了81.34% 的用户
//*/
//class Solution {
//public:
//	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//
//		popZero(nums1,m);
//
//		for (int i = 0; i < nums2.size(); i++)
//			nums1.push_back(nums2[i]);
//
//		//合并后，排序前
//		for (int i = 0; i < nums1.size(); i++)
//			cout << nums1[i] << " ";
//		cout << endl;
//
//		bubbleSort(nums1);
//
//		//排序后
//		for (int i = 0; i < nums1.size(); i++)
//			cout << nums1[i] << " ";
//		cout << endl;
//
//	}
//
//	void bubbleSort(vector<int>& nums)
//	{
//		for (int m = 0; m < nums.size(); m++)
//			for (int n = m + 1; n < nums.size(); n++)
//				if (nums[m] > nums[n])
//					swap(nums[m], nums[n]);
//	}
//
//	void popZero(vector<int>& nums, int m)
//	{
//		int a = nums.size() - m;
//		for (int i= 0; i<a ; i++)
//		{ 
//			nums.pop_back();
//		}
//
//		cout << "数组去0后" << endl;
//		for (int i = 0; i < nums.size(); i++)
//			cout << nums[i] << " ";
//		cout << endl;
//	}
//};
//
//
//int main(void)
//{
//	//输入:nums1 = [1, 2, 3, 0, 0, 0], m = 3	nums2 = [2, 5, 6], n = 3
//
//	//	输出: [1, 2, 2, 3, 5, 6]
//
//	int arr1[] = { 0 };
//	int arr2[] = {1};
//	/*int arr1[] = { -1, -1, 0, 0, 0, 0 };
//	int arr2[] = { -1, 0 };*/
//
//	int m = 0;
//	int n = 1;
//
//	vector<int> vec1(arr1, arr1 + sizeof(arr1) / sizeof(int));
//	vector<int> vec2(arr2, arr2 + sizeof(arr2) / sizeof(int));
//
//	cout << "vec1 : " << endl;
//	for (int i = 0; i < vec1.size(); i++)
//		cout << vec1[i] << " ";
//	cout << endl;
//
//	cout << "vec2 : " << endl;
//	for (int i = 0; i < vec2.size(); i++)
//		cout << vec2[i] << " ";
//	cout << endl << endl;
//
//	Solution().merge(vec1, m, vec2, n);
//
//	return 0;
//}
////[-1, -1, 0, 0, 0, 0]
////4
////[-1, 0]
////2