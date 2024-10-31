//#include<stdc++.h>
//using namespace std;
//
//int main()
//{
//	int s = 0;
//	vector<int>data1(4, 0);
//	vector<int>data2(4, 0);
//	vector<int>data3(4, 0);
//	cin >> data1[0] >> data1[1] >> data1[2] >> data1[3];//square1
//	cin >> data2[0] >> data2[1] >> data2[2] >> data2[3];//square2
//	cin >> data3[0] >> data3[1] >> data3[2] >> data3[3];//square3
//	int x, y, x2,y2;
//
//	//特别注意：max（）用来比较两个参数中最大的那个
//	//如果要比较三个参数，需要给所有参数加一个大括号max({})
//	x = max({ data1[0],data2[0],data3[0] });
//	y = min({ data1[1],data2[1],data3[1] });
//	x2 = min({ (data1[0] + data1[2]), (data2[0] + data2[2]), (data3[0] + data3[2]) });
//	y2 = max({ (data1[1] - data1[3]), (data2[1] - data2[3]), (data3[1] - data3[3]) });
//	if (x < x2 && y > y2)
//	{
//		s = (x2 - x) * (y - y2);
//	}
//	cout << s << endl;
//	return 0;
//}