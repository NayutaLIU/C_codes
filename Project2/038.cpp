//#include<stdc++.h>
//using namespace std;
//
//int main()
//{
//	string s_in;
//	vector<char>tar_words;//压缩前的字符
//	cin >> s_in;
//	vector<char>result;
//	for (char c : s_in)
//	{
//		tar_words.emplace_back(c);
//	}
//	int i = 0;
//	while(i<tar_words.size())
//	{
//		//遇到数字
//		if (tar_words[i] < '9' && tar_words[i]>'0')
//		{
//			
//			int num = tar_words[i];
//			if (num <= 2) {
//				cout << "!error" << endl;
//				//break;
//				return -1;
//			}
//			else
//			{
//				for (int j = 0; j < num; j++)
//				{
//					result.emplace_back(tar_words[i + 1]);
//				}
//				i++;
//				i++;
//			}
//		}
//		else if (tar_words[i] <= 'z' && tar_words[i] >= 'a')
//		{
//
//		}
//	}
//}