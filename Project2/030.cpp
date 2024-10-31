//#include<stdc++.h>
//using namespace std;
//
//bool find(string& s, vector<bool>& used)
//{
//	bool isFind = false;
//	int index = 0;
//	vector<int>quack_index(5, 0);
//	for (int i = 0; i < s.length(); i++)
//	{
//		if (!used[i] && s[i] == "quack"[index])
//        //s[i] == "quack"[index]：检查字符串 s 中的当前字符是否与 "quack" 中的当前字符相等。
//		{
//			quack_index[index++] = i;
//		}
//		if (index == 5)
//		{
//			isFind = true;
//			for (int j = 0; j < 5; j++)
//			{
//				used[quack_index[j]] = true;
//			}
//
//			index = 0;
//		}
//	}
//	return isFind;
//}
//
//
//int main()
//{
//	string s;
//	cin >> s;
//	vector<bool>used(s.length(), false);
//	int count = 0;
//	while (find(s, used))
//	{
//		count++;
//	}
//	cout << (count == 0 ? -1 : count) << endl;
//
//	return 0;
//}
