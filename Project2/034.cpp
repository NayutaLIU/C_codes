//#include<stdc++.h>
//using namespace std;
//
//int main()
//{
//	int tmp;
//	vector<int>nums;
//	while (cin >> tmp)
//	{
//		nums.emplace_back(tmp);
//		if (getchar() != ' ')break;
//	}
//	int len = nums.size();
//	int res = INT_MAX;
//	for (int i = 1; i < len / 2; i++)
//	{
//		int j = nums[i];
//		int k = i;
//		int count = 1;
//		while (k < len - 1)
//		{
//			j = nums[k];
//			k = j + k;
//			count++;
//		} 
//		if (k == len - 1)
//		{
//			res = min(count, res);
//		}
//		else continue;
//	}
//	if (res == INT_MAX)
//	{
//		cout << -1 << endl;
//	}
//	else
//	{
//		cout << res << endl;
//	}
//	
//}