//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	void sortColors(vector<int>& nums) {
//		//计数排序
//		int count[3]{ 0 };
//		int index=0;
//		for (int i = 0; i < nums.size(); i++)
//			count[nums[i]]++;
//
//		cout << "0 = " << count[0] << endl;
//		cout << "1 = " << count[1] << endl;
//		cout << "2 = " << count[2] << endl;
//		cout << "size = " << nums.size() << endl;
//
//		for (int j = 0; j < count[0]; j++)
//			nums[index++] = 0;
//		for (int j = 0; j < count[1]; j++)
//			nums[index++] = 1;
//		for (int j = 0; j < count[2]; j++)
//			nums[index++] = 2;
//
//	}
//};
//int main(void)
//{
//	//输入: [2,0,2,1,1,0],	输出: [0, 0, 1, 1, 2, 2]
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