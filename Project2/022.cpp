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
//	cin >> subLen; //��ȡ����
//	int n;
//	cin >> n; //��������
//	cin.ignore();
//
//	deque<deque<int>> lists(n); //��ά����
//
//	for (int i = 0; i < n; i++)
//	{
//		lists.emplace_back(splitCin(','));
//	}
//
//
//	vector<int>res;
//
//	while (!lists.empty()) //����ά���в��գ���˵����������Ԫ�ز���
//	{
//		deque<int>list = lists.front();
//		lists.pop_front();
//
//		for (int i = 0; i < subLen && !list.empty(); i++)
//		{
//			res.emplace_back(list.front());
//			list.pop_front();
//		}
//		if (!list.empty()) //������listû�գ�˵��ʣ�Ļ���ЩԪ�أ���list��lists�����
//		{
//			lists.push_back(list);
//		}
//	}
//
////������
//	for (int i = 0; i < res.size(); i++)
//	{
//		cout << res[i];
//
//		//���һ�����ֺ���û'��'
//		if (i < res.size() - 1)
//		{
//			cout << ",";
//		}
//	}
//	return 0;
//}
