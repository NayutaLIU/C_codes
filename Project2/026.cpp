//#include<stdc++.h>
//using namespace std;
//int main()
//{
//	vector<int>nums;
//	string s;
//	while (cin >> s)
//	{
//		for (const auto& c : s)
//		{
//			if (!isdigit(c))
//			{
//				cout << "[]" << endl;
//				return 0;
//			}
//		}
//		nums.emplace_back(stoi(s));
//	}
//	for (int i = 0; i < nums.size() - 1; i++)
//	{
//		bool needSwap = i % 2 == 0 ? nums[i]<nums[i + 1] : nums[i]>nums[i + 1];
//		if (needSwap)
//		{
//			int tmp = nums[i];
//			nums[i] = nums[i + 1];
//			nums[i + 1] = tmp;
//		}
//	}
//	for(int num:nums)
//	{
//		cout << num << " ";
//	}
//	return 0;
//
//}