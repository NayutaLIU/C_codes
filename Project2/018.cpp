///**********************       哈希算法       **************************************************/
//#include<iostream>
//#include<vector>
//#include<map>
//#include<string>
//#include<algorithm>
//
//using namespace std;
//
//int main()
//{
//    vector<int>steps;
//    getchar(); //空读1个字符
//    int tmp; //临时保存字符
//    while (cin >> tmp)
//    {
//        steps.emplace_back(tmp);
//        if (getchar() != ',')
//        {
//            break;
//        }
//    }
//    //指定目标值
//    int count;
//    cin >> count;
//    /*至此数据已输入完成*/
//
//
//
//    map<int, int>hash;//建立哈希表
//
//    int minIdxSum = INT_MAX; //将序列和的初始值定为MAX，方便后续找最小序列和
//
//    string ans; //最终结果
//
//    for (int i = 0; i < steps.size(); i++)//遍历容器steps
//    {
//        int step1 = steps[i];
//        int step2 = count - step1;
//
//        /*     注：find()函数是找hash中键值为step2的元素     */
//        if (hash.find(step2) != hash.end())//如果在hash表中找到了对应的step2
//        {
//            int idx2 = hash[step2];//将key为step2中的val赋给idx2
//            int idxSum = i + idx2;
//            if (idxSum < minIdxSum)
//            {
//                minIdxSum = idxSum;
//                ans = "[" + to_string(step2) + "," + to_string(step1) + "]";
//            }
//        }
//        else//如果在hash表中没找到对应的step2，则有两种可能：
//
//       //1.对应的step1还没有录入，下面的if语句录入step1，如果后面的数据中出现了与step1对应的step2的话，就可以直接找到对应的step1了
//       //2.对应的step1已经录入，就是下面的if语句判断为false，这种情况说明step1没有对应的step2，无法相加得到count
//        {
//            if (hash.find(step1) == hash.end())//如果找不到对应的step1（就是说还没录入过这个数字）
//            {
//                //录入这个数字，将key为step1的位置上，把i赋值给val
//                hash[step1] = i;
//
//            }
//
//        }
//    }
//    //for循环结束后，最终ans一定是idxSum最小的一组数据，输出即可
//    cout << ans << endl;
//
//    return 0;
//}