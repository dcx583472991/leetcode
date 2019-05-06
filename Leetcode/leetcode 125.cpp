//#include<iostream>
//#include<string>
//#include<cctype>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//	bool isPalindrome(string s) {
//		cout << "s = " << s << endl;
//		
//		for (int i = 0; i<s.size(); i++) 
//			if (s[i] >= 'A'&&s[i] <= 'Z')
//				s[i] += 32;		
//				
//		cout << "s = " << s << endl;
//		cout << "s.size = " << s.size() << endl;
//
//		int m = 0;
//		int n = s.size() - 1;
//		while (m < n)
//		{
//			if (!isalnum(s[m])) {
//				m++;
//				continue;
//			}
//				
//			if (!isalnum(s[n])) {
//				n--;
//				continue;
//			}
//				
//			if (s[m] == s[n])
//			{
//				m++;
//				n--;
//			}
//			else
//				return false;
//		}
//			
//		return true;
//	}
//};
//
//
//int main(void)
//{
//	//ÓÐÐòÊý×é
//
//	/*string s = "A man, a plan, a canal: Panama";*/
//	string s = "A man, a plan, a canal -- Panama";
//	cout << "s.size = " << s.size() << endl;
//
//	bool isPal = Solution().isPalindrome(s);
//	cout << "isPal = " << isPal << endl;
//
//	return 0;
//}