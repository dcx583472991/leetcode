//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	void sortColors(vector<int>& nums) {
//		int zero = -1;	//nums[0 - > zero]
//		int two = nums.size();	//nums.[two - > len-1]
//
//		for (int i = 0; i < two; )
//			if (nums[i] == 1)
//				i++;
//			else if (nums[i] == 2)
//				swap(nums[--two], nums[i]);
//			else
//				//nums[i] == 0
//				swap(nums[++zero], nums[i++]);
//	}
//};
//int main(void)
//{
//	//ÊäÈë: [2,0,2,1,1,0],	Êä³ö: [0, 0, 1, 1, 2, 2]
//
//	int arr[] = { 2,0,2,1,1,0 };
//
//	vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));
//
//	for (int i = 0; i < vec.size(); i++)
//		cout << vec[i] << " ";
//	cout << endl;
//
//	Solution().sortColors(vec);
//
//	for (int i = 0; i < vec.size(); i++)
//		cout << vec[i] << " ";
//	cout << endl;
//
//	return 0;
//}