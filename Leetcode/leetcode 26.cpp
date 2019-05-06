//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	int removeDuplicates(vector<int>& nums) 
//	{
//		if (nums.empty())
//			return 0;
//		int k = 0;
//		for (int i = 0; i < nums.size(); i++)
//		{
//			if (nums[i] != nums[k])
//			{
//				nums[k + 1] = nums[i];
//				k++;
//			}
//
//		}
//		return k + 1;
//	}
//};
//
//int main(void)
//{
//	int arr[] = { 0,0,1,1,1,2,2,3,3,4 };
//
//	vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));
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