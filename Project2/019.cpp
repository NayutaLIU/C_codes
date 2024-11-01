//#include<iostream>
//#include<string>
//#include<vector>
//#include<set>
//
//using namespace std;
//
//int indexOf(string& src, vector<set<char>>& levels)
//{
//    //滑动匹配levels.length长度的子串
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
//    //将tar字符串转化为levels多层结构
//    //逻辑：tar字符串中，每个[]包含的所有字符为一层，未被[]包含的单个字符作为一层
//    //level用于记录[]中的字符
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