//#include <stdc++.h>
//using namespace std;
//int main()
//{
//	string s;
//	cin >> s;
//	/*	vector<char>words*/;
//	map<char, int>words;
//	for (const char& c : s)
//	{
//			words[c]++;
//	}
//	vector<pair<char, int>>pairs;
//	for (const auto& pair : words)
//	{
//		pairs.emplace_back(pair);
//	}
//	sort(pairs.begin(), pairs.end(), [](pair<char, int>a, pair<char, int>b)
//		{
//			//把出现次数多的字母放前面
//			if (a.second != b.second)
//			{
//				return a.second > b.second;
//			}
//			//当两个字母都是大（小）写，比较自然顺序
//			if (islower(a.first) && islower(b.first) || isupper(a.first) && isupper(b.first))
//			{
//				return a.first < b.first;
//			}
//			//把小写字母放前面
//			else
//			{
//				return islower(a.first) != 0;
//			}
//		});
//	for (const auto& pair : pairs)
//	{
//		cout << pair.first << ":" << pair.second << ";";
//	}
//	return 0;
//}