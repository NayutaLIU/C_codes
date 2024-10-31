//#include<stdc++.h>
//using namespace std;
//int main()
//{
//	int n, m;
//	cin >> n >> m;//n个人，m条消息
//	if (n < 1 || n >= 100000 || m < 1 || m >= 100000)
//	{
//		cout << "NULL" << endl;
//		return -1;
//	}
//	//注：n个人需要0-n-1的序号
//	map<int, vector<int>>mp;
//	for (int i = 0; i < m; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		if ((c == 0 || c == 1) && (1 <= a && a <= n) && (1 <= b && b <= n) )
//		{
//			if (c == 0)
//			{
//				mp[a].emplace_back(b);
//			}
//			else if (c == 1) 
//			{
//				bool flag = false;
//				for (const auto& s : mp[a])
//				{
//					if (s == b)
//					{
//						flag = true;
//						cout << "we are a team" << endl;
//						
//					}
//				}
//				if (!flag)
//				{
//					cout << "we are not a team" << endl;
//				}
//				
//			}
//		}
//		else
//		{
//			cout << "da pian zi" << endl;
//		}
//	}
//	return 0;
//}