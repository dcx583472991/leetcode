//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//		int a,b;
//		a = 0;
//		b = 0;
//
//		vector<int> arr;
//
//		for (int i = 0; i <= m+n-1; i++)
//		{
//			if (a > m-1)
//				arr.push_back(nums2[b++]);
//			else if (b > n-1)
//				arr.push_back(nums1[a++]);
//			//上方先比较索引合法性，在索引正确的情况下再进行比较操作
//			else if (nums1[a] <= nums2[b])
//				arr.push_back(nums1[a++]);
//			else
//				arr.push_back(nums2[b++]);
//		}
//
//		for (int i = 0; i < nums1.size(); i++)
//			nums1[i] = arr[i];
//
//		for (int i = 0; i < nums1.size(); i++)
//			cout << nums1[i] << " ";
//		cout << endl << endl;
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
//	int arr1[] = { 1, 2, 3, 0, 0, 0 };
//	int arr2[] = { 2, 5, 6 };
//
//	/*int arr1[] = { -1, -1, 0, 0, 0, 0 };
//	int arr2[] = { -1, 0 }*/;
//
//	int m = 3;
//	int n = 3;
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