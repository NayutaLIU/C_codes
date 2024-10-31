



///********************************二分查找*************************************************/
//#include<stdc++.h>
//using namespace std;
//
//int binarySearch(vector<vector<int>> arr, int target)
//{
//	int l = 0;//首端
//	int r = arr.size() - 1;//尾端
//
//	while (l <= r)
//	{
//		int mid = (l + r) >> 1; //计算中点，通常用于二分查找中，相当于除以2的幂次方，如  10>>1就是5，  7>>1是3
//		int midVal = arr[mid][0];
//		if (midVal > target)
//		{
//			r = mid - 1;
//		}
//		else if (midVal < target)
//		{
//			l = mid + 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	return l;
//}
//
//int main()
//{
//	vector<vector<int>>memories;
//	int size, count;
//	while (cin >> size)
//	{
//		getchar();
//		cin >> count;
//		memories.emplace_back(vector<int>{size, count});
//		if (getchar() != ',')break;
//	}
//
//	vector<int>requests;
//	string s;
//	cin >> s;
//	stringstream ss(s);
//	string token;
//	while (getline(ss, token, ','))
//	{
//		if (!token.empty())
//		{
//			requests.emplace_back(stoi(token));
//		}
//	}
//
//	sort(memories.begin(), memories.end(), [](vector<int>a, vector<int>b)
//		{
//			return a[0] < b[0];//按照memories的第一个参数（粒度）来排序
//		});
//
//	//遍历申请列表
//	for (int i = 0; i < requests.size(); i++)
//	{
//		//二分查找（找到>=request的内存资源）
//		int j = binarySearch(memories, requests[i]);
//
//		if (j < memories.size())
//		{
//			cout << "true";
//			if (--memories[j][1] == 0)
//			{
//				memories.erase(memories.begin() + j); //擦除对应的数据
//			}
//		}
//		else {
//			cout << "false";
//		}
//		if (i < requests.size() - 1)
//		{
//			cout << ",";
//		}
//	}
//
//	return 0;
//}