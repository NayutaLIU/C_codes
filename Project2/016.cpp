//#include<stdc++.h>
//using namespace std;
//
//
//int main()
//{
//	int n, e;
//	cin >> n >> e;
//	vector<int> x_s;
//	vector<int> y_s;
//	for (int i = 0; i < n; i++)
//	{
//		int x, y;
//		cin >> x >> y;
//		x_s.emplace_back(x);
//		y_s.emplace_back(y);
//	}
//	int height = 0;
//	int front = 0;
//	int width = 0;
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		height += y_s[i];
//		if (i == (n - 1))
//		{
//			width = e - x_s[i];
//		}
//		else {
//			width = x_s[i + 1] - x_s[i];
//		}
//
//		sum += (abs(height) * width);
//	}
//		cout << sum << endl;
//
//	return 0;
//
//}