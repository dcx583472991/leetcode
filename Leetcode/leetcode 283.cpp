//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	void moveZeroes(vector<int>& nums)
//	{
//		int k = 0;
//		for (int i = 0; i < nums.size(); i++)
//		{
//			if (nums[i])
//			{
//				swap(nums[i], nums[k++]);
//			}
//		}
//	}
//};
//
//int main(void)
//{
//	int arr[] = { 0,1,0,3,12 };
//
//	vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));
//
//	Solution().moveZeroes(vec);
//
//	for (int i = 0; i < vec.size(); i++)
//		cout << vec[i] << " ";
//
//	return 0;
//}