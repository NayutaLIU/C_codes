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
//	sort(weights.begin(), weights.end());//���򣬴�С����
//	int fault = weights[0];
//	int correct = weights[0];
//
//	for (int i = 1; i < n; i++)
//	{
//		fault ^= weights[i];
//		/*
//		�ڱ���У�^= ��һ��λ���������Ϊ��λ���ֵ��������������������Ҳ���ʽ���а�λ���XOR�����������������ֵ����������
//
//		��λ�������Ĺ����ǣ�
//
//		��������Ƚϵ�λ��ͬ������Ϊ1��
//		��������Ƚϵ�λ��ͬ������Ϊ0��
//		���磬���������������� a �� b��
//
//		a = 1010 ��ʮ�����е�10��
//		b = 1100 ��ʮ�����е�12��
//		���а�λ������ a ^ b �Ľ���� 0110����ʮ�����е�6��
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