//#include<iostream>
//#include<string>
//#include<vector>
//#include<set>
//
//using namespace std;
//
//int indexOf(string& src, vector<set<char>>& levels)
//{
//    //����ƥ��levels.length���ȵ��Ӵ�
//    for (int i = 0; i <= src.length() - levels.size(); i++)
//    {
//        int j = 0;
//        for (; j < levels.size(); j++)
//        {
//            if (levels[j].find(src[i + j]) == levels[j].end())
//            {
//                break;
//            }
//        }
//        if (j == levels.size())
//        {
//            return i;
//        }
//
//    }
//    return -1;
//
//}
//
//int main()
//{
//    string src, tar;
//    cin >> src >> tar;
//    vector<set<char>>levels;
//    //��tar�ַ���ת��Ϊlevels���ṹ
//    //�߼���tar�ַ����У�ÿ��[]�����������ַ�Ϊһ�㣬δ��[]�����ĵ����ַ���Ϊһ��
//    //level���ڼ�¼[]�е��ַ�
//    set<char>level;
//    bool isOpen = false;
//    for (const auto& c : tar)
//    {
//        if (c == '[')
//        {
//            isOpen = true;
//        }
//        else if (c == ']')
//        {
//            isOpen = false;
//            levels.push_back(level);
//            level.clear();
//        }
//        else if (isOpen)
//        {
//            level.insert(c);
//        }
//        else {
//            levels.emplace_back(set<char>{c});
//        }
//    }
//
//    cout << indexOf(src, levels) << endl;
//
//    return 0;
//}