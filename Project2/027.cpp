///******************************************Լɪ������*********************************************/
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
//				if (num % 10 == target) //��λ��7
//				{
//					return true;
//				}
//				else
//				{
//					num /= 10; //�����С����������һλ
//				}
//			}
//		}
//		return false;
//	}
//
//int main()
//{
//	int totalGo = 0; //һ�����˶��ٴι�
//	int count = 0; //һ��������
//	int num;
//	while (cin >> num)
//	{
//		totalGo += num;
//		count++;
//	}
//	//p[j]��ʾÿ���˺��˼��ι�����ʼΪ0
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