//#include<stdc++.h>
//using namespace std;
//
//deque<int> splitCin(char delimiter)
//{
//	string s;
//	getline(cin, s);
//	stringstream ss(s);
//	string token;
//
//	deque<int>res;	
//
//	while (getline(ss, token, delimiter))
//	{
//		if (!token.empty())
//		{
//			res.emplace_back(stoi(token));
//		}
//	}
//	return res;
//}
//
//
//int main()
//{
//	int subLen;
//	cin >> subLen; //截取长度
//	int n;
//	cin >> n; //数组数量
//	cin.ignore();
//
//	deque<deque<int>> lists(n); //二维队列
//
//	for (int i = 0; i < n; i++)
//	{
//		lists.emplace_back(splitCin(','));
//	}
//
//
//	vector<int>res;
//
//	while (!lists.empty()) //当二维队列不空，则说明还有数组元素残留
//	{
//		deque<int>list = lists.front();
//		lists.pop_front();
//
//		for (int i = 0; i < subLen && !list.empty(); i++)
//		{
//			res.emplace_back(list.front());
//			list.pop_front();
//		}
//		if (!list.empty()) //如果这个list没空，说明剩的还有些元素，把list插lists最后面
//		{
//			lists.push_back(list);
//		}
//	}
//
////输出结果
//	for (int i = 0; i < res.size(); i++)
//	{
//		cout << res[i];
//
//		//最后一个数字后面没'，'
//		if (i < res.size() - 1)
//		{
//			cout << ",";
//		}
//	}
//	return 0;
//}
