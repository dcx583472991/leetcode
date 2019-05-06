//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	vector<int> twoSum(vector<int>& nums, int target) {
//		/*int i,k;
//		int m, n;
//		for (i=0; i<nums.size(); i++)
//		{
//			for (k=1; k < nums.size(); k++)
//			{
//				if (nums[k] + nums[i] == target && i!=k) {
//					m = i;
//					n = k;
//					break;
//				}
//			}
//		}
//		cout << "arr[" << m << "] + arr[" << n << "] = " << target << endl;
//		nums = { m,n };
//		return nums;*/
//
//		int i, k;
//		for (i = 0; i<nums.size(); i++)
//			for (k = i+1; k < nums.size(); k++)
//				if (nums[k] + nums[i] == target) {
//					cout << "arr[" << i << "] + arr[" << k << "] = " << target << endl;
//					return{i,k};
//				}
//	}
//};
//
//int main(void)
//{
//	int arr[] = { 2, 7, 11, 15 };
//	int target = 9;
//	vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));
//	
//	Solution().twoSum(vec, target);
//	
//	/*for (int i = 0; i < vec.size(); i++)
//		cout << vec[i] << " ";
//	cout << endl;*/
//	
//	return 0;
//}