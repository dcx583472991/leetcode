//#include<iostream>
//using namespace std;
//
//void insertSort(int arr[], int n)
//{
//	for (int j = 1; j < n; j++) {
//		int key = arr[j];
//		int i = j - 1;
//		while (i >= 0 && arr[i] > key) {
//			arr[i + 1] = arr[i];
//			i--;
//		}
//		arr[i + 1] = key;
//	}
//
//}
//
//
//
//
//int main(void)
//{
//	int arr[] = { 5, 2, 6, 9, 3, 7 };
//	int nums = sizeof(arr) / sizeof(int);
//	insertSort(arr, nums);
//
//	for (int i = 0; i < nums; i++)
//	{
//		cout << arr[i] << " ";
//	}
//
//	return 0;
//}