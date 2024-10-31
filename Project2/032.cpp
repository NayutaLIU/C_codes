//#include<stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int>weights(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> weights[i];
//	}
//
//
//	sort(weights.begin(), weights.end());//排序，从小到大
//	int fault = weights[0];
//	int correct = weights[0];
//
//	for (int i = 1; i < n; i++)
//	{
//		fault ^= weights[i];
//		/*
//		在编程中，^= 是一个位运算符，称为按位异或赋值运算符。它将左侧变量与右侧表达式进行按位异或（XOR）操作，并将结果赋值回左侧变量。
//
//		按位异或操作的规则是：
//
//		如果两个比较的位不同，则结果为1。
//		如果两个比较的位相同，则结果为0。
//		例如，对于两个二进制数 a 和 b：
//
//		a = 1010 （十进制中的10）
//		b = 1100 （十进制中的12）
//		进行按位异或操作 a ^ b 的结果是 0110，即十进制中的6。
//		*/
//		correct += weights[i];
//	}
//	if (fault == 0)
//	{
//		cout << correct - weights[0] << endl;
//	}
//	else
//	{
//		cout << -1 << endl;
//	}
//	return 0;
//}