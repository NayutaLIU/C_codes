



///********************************���ֲ���*************************************************/
//#include<stdc++.h>
//using namespace std;
//
//int binarySearch(vector<vector<int>> arr, int target)
//{
//	int l = 0;//�׶�
//	int r = arr.size() - 1;//β��
//
//	while (l <= r)
//	{
//		int mid = (l + r) >> 1; //�����е㣬ͨ�����ڶ��ֲ����У��൱�ڳ���2���ݴη�����  10>>1����5��  7>>1��3
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
//			return a[0] < b[0];//����memories�ĵ�һ�����������ȣ�������
//		});
//
//	//���������б�
//	for (int i = 0; i < requests.size(); i++)
//	{
//		//���ֲ��ң��ҵ�>=request���ڴ���Դ��
//		int j = binarySearch(memories, requests[i]);
//
//		if (j < memories.size())
//		{
//			cout << "true";
//			if (--memories[j][1] == 0)
//			{
//				memories.erase(memories.begin() + j); //������Ӧ������
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