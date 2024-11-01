////#include<stdc++.h>
////using namespace std;
////int main()
////{
////	int tmp;
////	vector<int> arg;
////	while (cin >> tmp)
////	{
////		arg.emplace_back(tmp);
////		if (getchar() != ',')break;
////	}
////	int sum;
////	cin >> sum;
////	int len = 0;
////	int count = sum;
////	int i = 0;
////	vector<int>tmps;
////	for (; i < arg.size(); i++)
////	{
////		int j = i;
////		while (j<arg.size() && count > 0)
////		{
////			tmps.emplace_back(arg[j]);
////			count = count - arg[j];
////			j++;
////			if (count == 0)
////			{
////				int a = tmps.size();
////				len = max(len, a);
////				tmps.clear();
////			}
////			else if (count < 0)
////			{
////				tmps.clear();
////			}
////
////		}
////	}
////	if (len != 0)
////	{
////		cout << len << endl;
////	}
////	else
////	{
////		cout << -1 << endl;
////
////	}
////
////}
///*******************************************»¬¿é½â·¨*************************************************/
//#include<stdc++.h>
//using namespace std;
//
//vector<int> splitCin(char delimiter)
//{
//	string s;
//	cin >> s;
//
//	stringstream ss(s);
//	string token;
//	vector<int> res;
//	while (getline(ss, token, delimiter))
//	{
//		res.emplace_back(stoi(token));
//	}
//	return res;
//}
//int main()
//{
//	vector<int> nums = splitCin(',');
//	int sum;
//	cin >> sum;
//	int l = 0;
//	int r = 0;
//	int window_sum = 0;
//	int maxLen = 0;
//	while (r < nums.size())
//	{
//		if (l > r || window_sum + nums[r] <= sum)
//		{
//			window_sum += nums[r++];
//		}
//		else
//		{
//			window_sum -= nums[l++];
//		}
//		if (window_sum == sum)
//		{
//			maxLen = max(maxLen, r - l);
//		}
//	}
//	cout << (maxLen == 0 ? -1 : maxLen) << endl;
//	return 0;
//}