//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	int removeDuplicates(vector<int>& nums)
//	{
//		if (nums.size() < 3)
//			return nums.size();
//		int j = 2;
//		int i;
//		for (i = 2; i < nums.size(); i++)
//		{
//			if (nums[i] != nums[j - 2])
//			{
//				nums[j] = nums[i];
//				j++;
//			}
//		}
//		return j;
//	}
//};
//
//int main(void)
//{
//	int arr[] = { 1,1,1,2,2,3 };
//
//	vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));
//
//	for (int i = 0; i < vec.size(); i++)
//		cout << vec[i] << " ";
//	cout << endl;
//
//	int k = Solution().removeDuplicates(vec);
//
//	for (int i = 0; i < vec.size(); i++)
//		cout << vec[i] << " ";
//	cout << endl;
//	cout << "数组大小 ： " << k << endl;
//
//	return 0;
//}