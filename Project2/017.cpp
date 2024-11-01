//#include<stdc++.h>
//using namespace std;
//
//
//class Resp
//{
//public:
//	int t;
//	int m;
//	Resp(int t, int m) :t(move(t)), m(move(m)) {};
//};
//
//int convert(int n)
//{
//	if (n >= 128)
//	{
//		vector<int> bin(8, 0);
//		int i = 7;
//		while (n > 0)
//		{
//			bin[i--] = n % 2;
//			n /= 2;
//		}
//
//		int exp = 0;
//		for (int j = 1; j < 4; j++)
//		{
//			exp += bin[j] * (1 << (3 - j));
//		}
//		int mant = 0;
//		for (int j = 4; j < 8; j++)
//		{
//			mant += bin[j] * (1 << (7 - j));
//		}
//		return(mant | 16) << (exp + 3);
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int c;
//	cin >> c;
//	int res = INT_MAX;
//	for (int i = 0; i < c; i++)
//	{
//		int tmp_t, tmp_m;
//		cin >> tmp_t >> tmp_m;
//		tmp_m = convert(tmp_m);
//		int sum = tmp_t + tmp_m;
//		res = min(res, sum);
//	}
//	cout << res<<endl;
//
//	return 0;
//}