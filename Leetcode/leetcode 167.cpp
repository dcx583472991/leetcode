//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	vector<int> twoSum(vector<int>& numbers, int target) {
//		int m = 0;
//		int n = numbers.size() - 1;
//
//		while (m < n) {
//			if (numbers[m] + numbers[n] == target)
//				return vector<int> {m + 1, n + 1};
//			else if (numbers[m] + numbers[n] < target)
//				m++;
//			else
//				n--;
//		}
//
//		throw invalid_argument("No Solution.");
//
//	}
//};
//
//
//int main(void)
//{
//	//ÓÐÐòÊý×é
//
//	int arr[] = { 2, 7, 11, 15 };
//	int target = 13;
//
//	vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));
//
//	cout << "vec : " << endl;
//	for (int i = 0; i < vec.size(); i++)
//		cout << vec[i] << " ";
//	cout << endl;
//
//
//	vector<int> res = Solution().twoSum(vec, target);
//
//	cout << "res : " << endl;
//	for (int i = 0; i < res.size(); i++)
//		cout << res[i] << " ";
//	cout << endl;
//
//	return 0;
//}