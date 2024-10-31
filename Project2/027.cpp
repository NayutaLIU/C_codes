///******************************************约瑟夫环问题*********************************************/
//#include<stdc++.h>
//using namespace std;
//
//
//bool contains(int num, int target)
//	{
//		while (num != 0)
//		{
//			if (num != 0)
//			{
//				if (num % 10 == target) //个位含7
//				{
//					return true;
//				}
//				else
//				{
//					num /= 10; //否则把小数点往左移一位
//				}
//			}
//		}
//		return false;
//	}
//
//int main()
//{
//	int totalGo = 0; //一共喊了多少次过
//	int count = 0; //一共多少人
//	int num;
//	while (cin >> num)
//	{
//		totalGo += num;
//		count++;
//	}
//	//p[j]表示每个人喊了几次过，初始为0
//	vector<int>p(count, 0);
//	int i = 1;
//	int j = 0;
//	while (totalGo > 0)
//	{
//		if (i % 7 == 0 || contains(i, 7))
//		{
//			totalGo--;
//			p[j]++;
//		}
//		i++;
//		if (++j >= count)j = 0;
//	}
//	for (int k = 0; k < count; k++)
//	{
//		cout << p[k] << " ";
//	}
//	return 0;
//
//}