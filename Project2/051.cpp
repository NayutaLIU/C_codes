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
//			//�ѳ��ִ��������ĸ��ǰ��
//			if (a.second != b.second)
//			{
//				return a.second > b.second;
//			}
//			//��������ĸ���Ǵ�С��д���Ƚ���Ȼ˳��
//			if (islower(a.first) && islower(b.first) || isupper(a.first) && isupper(b.first))
//			{
//				return a.first < b.first;
//			}
//			//��Сд��ĸ��ǰ��
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