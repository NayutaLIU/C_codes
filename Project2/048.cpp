//#include<stdc++.h>
//using namespace std;
//
//struct Word
//{
//	int sz;
//	char head;
//	char tail;
//	vector<char>ws;
//};
//
//
//
//int main()
//{
//	int k;
//	cin >> k;
//	int n;
//	cin >> n;
//	vector<Word>res;
//	vector<Word>words(n);
//	map<char, vector<Word>>mp;
//	for (int i = 0; i < n; i++)
//	{
//		Word word;
//		string tmp;
//		cin >> tmp;
//		int ct = 0;
//		for (const char& c : tmp)
//		{
//			word.ws.emplace_back(c);
//			ct++;
//		}
//		word.head = word.ws.front();
//		word.tail = word.ws.back();
//		word.sz = ct;
//		mp[word.head].emplace_back(word);
//		words[i] = word;
//	}
//
//	char t1 = words[k].tail;
//	char h1 = words[k].head;
//	res.emplace_back(words[k]);
//	for (int j=0;j<mp[h1].size();j++)
//	{
//		Word ttt = words[k];
//		if (mp[h1][j].ws == ttt.ws)
//		{
//			mp[h1].erase(mp[h1].begin() + j);
//		}
//	}
//	while(!mp[t1].empty()) 
//	{
//		if (mp[t1].size() == 1)
//		{
//			res.emplace_back(mp[t1].front());
//			mp[t1].clear();
//			t1 = res.back().tail;
//		}
//		else //mp中不止一个head匹配的Word元素
//		{
//			sort(mp[t1].begin(), mp[t1].end(), [](Word& w1, Word& w2)
//				{
//					if (w1.sz != w2.sz)
//					{
//						return w1.sz > w2.sz;
//					}
//					else
//					{
//						int ct1 = 0;
//						int ct2 = 0;
//						for (const char& c : w1.ws)
//						{
//							ct1 += (c - 'a');
//						}
//						for (const char& c : w2.ws)
//						{
//							ct2 += (c - 'a');
//						}
//						return ct1 < ct2;
//					}
//				});
//			res.emplace_back(mp[t1].front());
//			mp[t1].erase(mp[t1].begin());
//			t1 = res.back().tail;
//		}
//	}
//	for (const auto& s : res)
//	{
//		for (const auto& c : s.ws)
//		{
//			cout << c;
//		}
//	}
//
//
//
//	return 0;
//}