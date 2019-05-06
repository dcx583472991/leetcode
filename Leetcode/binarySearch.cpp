//#include<iostream>
//using namespace std;
//
////二分查找法
//int binarySearch(int *arr, int n, int key)
//{
//	int l = 0;
//	int r = n - 1;
//	int mid = 0;
//	while (l <= r)
//	{
//		mid = (r+l) / 2;
//		if (key == arr[mid])
//			return mid;
//		if (key < arr[mid])
//			r = mid - 1;
//		else
//			l = mid + 1;
//	}
//}
//
//int main(void)
//{
//	int arr[10] = { 0,3,6,9,14,16,17,25,46,100 };
//	int p = binarySearch(arr, 10, 6);
//	cout << "下标 p : " << p << endl;
//
//	return 0;
//}