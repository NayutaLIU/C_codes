///*******************************暴力解法******************************************/
//#include<stdc++.h>
//using namespace std;
//
//int main()
//{
//	int m;//产品数
//	int n;//总投资额
//	int x;//可接受总风险
////第一行
//	cin >> m >> n >> x;
//	cin.ignore();
//
////第二行
//	vector<int>rewards;
//	int reward;
//	while (cin >> reward)
//	{
//		rewards.emplace_back(reward);
//		if (getchar() != ' ')break;
//	}
////第三行
//	vector<int>risks;
//	int risk;
//	while (cin >> risk)
//	{
//		risks.emplace_back(risk);
//		if (getchar() != ' ')break;
//	}
////第四行
//	vector<int>invests;
//	int invest;
//	while (cin >> invest)
//	{
//		invests.emplace_back(invest);
//		if (getchar() != ' ')break;
//	}
//
//
//	int sum = 0;
//	int ans_i = -1, ans_j = -1;
//	for (int i = 0; i < m; i++)
//	{
//		int iv_i = invests[i];
//		int ri_i = risks[i];
//		int re_i = rewards[i];
//		int sal = iv_i * re_i;
//	
//		for (int j = i + 1; j < m; j++)
//		{
//			if (((invests[j] + iv_i) <= n) && ((risks[j] + ri_i) <= x))//判定有足够的资源可以再投资一个
//			{
//				int sal_j = invests[j] * rewards[j];
//				if (sum < (sal + sal_j))
//				{
//					ans_i = i;
//					ans_j = j;
//					sum = sal + sal_j;
//				}
//			}
//			else {
//				if (sum < sal)
//				{
//					ans_i = i;
//					ans_j = -1;
//				}
//			}
//		}
//
//	}
//	for (int i = 0; i < m; i++)
//	{
//		if (ans_j == -1)
//		{
//			if (i != ans_i)
//			{
//				invests[i] = 0;
//			}
//		}
//		else
//		{
//			if (i != ans_i && i != ans_j)
//			{
//				invests[i] = 0;
//			}
//		}+
//	}
//	for (const auto& c : invests)
//	{
//		cout << c << " ";
//	}
//
//
//}


