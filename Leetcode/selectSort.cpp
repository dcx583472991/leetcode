//#include<iostream>
//using namespace std;
//
//void selectSort(int arr[], int n)
//{
//	for (int i = 0; i <= n - 1; i++)
//	{
//		int minIndex = i;
//		for (int j = minIndex + 1; j <= n - 1; j++)
//		{
//			if (arr[j] < arr[minIndex])
//				minIndex = j;
//		}
//		swap(arr[minIndex], arr[i]);
//	}
//}
//
//
//
//
//int main(void)
//{
//	int arr[] = { 5, 2, 6, 9, 3, 7 };
//	int nums = sizeof(arr) / sizeof(int);
//	selectSort(arr, nums);
//
//	for (int i = 0; i < nums; i++)
//	{
//		cout << arr[i] << " ";
//	}
//
//	return 0;
//}