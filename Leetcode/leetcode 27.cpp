//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	int removeElement(vector<int>& nums, int val) 
//	{
//		int k = 0;
//		for (int i = 0; i < nums.size(); i++)
//			if (nums[i] != val)
//				nums[k++] = nums[i];
//		return k;
//	}
//};
//
//int main(void)
//{
//	int arr[] = { 3,2,2,3 };
//	int val = 3;
//	vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));
//
//	int k = Solution().removeElement(vec,val);
//
//	for (int i = 0; i < vec.size(); i++)
//		cout << vec[i] << " ";
//	cout << endl;
//	cout << "数组大小 ： " << k << endl;
//
//	return 0;
//}