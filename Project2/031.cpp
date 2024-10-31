//#include<stdc++.h>
//using namespace std;
//
//
//int main()
//{
//	int tmp;
//	vector<int>ars;
//	while (cin >> tmp)
//	{
//		int alo = 0;
//		for (const auto& c : ars) {
//			alo += c;
//		}
//		alo += tmp;
//		if (alo <= 100) {
//			ars.emplace_back(tmp);
//			if (getchar() != ' ')break;
//		}
//		else {
//			alo = alo - 100;
//			if (alo != 0) {
//				ars.emplace_back(alo);
//			}
//			break;
//		}
//	}
//	int mount = ars.size();//日志条数
//
//
//	int res = 0;
//	for (int i = 0; i < mount; i++)
//	{
//		int sum = 0;
//		int dec = 0;
//		for (int j = i; j >=0; j--)
//		{
//			sum += ars[j];
//			dec += ars[j] * (i - j);
//
//		}
//		res = max(res, sum - dec);
//	}
//
//	cout << res << endl;
//}