///****************************��̬�滮�����飩+��������*******************************************************/
//#include<stdc++.h>
//using namespace std;
//
//int solution(int n, vector<int>scores, int k)
//{
//	int len = k + 1;
//	//dp[i]��ʾ������i�������ܵõ���������
//	vector<int>dp(n);
//	for (int i = 0; i < n; i++)
//	{
//		dp[i] = 0;
//	}
//	dp[0] = scores[0];
//
//	//��������
//	deque<int>queue; //����һ��˫�˶���
//	queue.push_back(dp[0]);
//
//	//��ʼ������γɹ���
//	for (int i = 1; i < min(len, n); i++)
//	{
//		//dp[i]=max(dp[0]~dp[i-1]+scores[i])
//		dp[i] = queue.front() + scores[i];
//
//		while (!queue.empty() && dp[i] > queue.back())
//		{
//			queue.pop_back();
//		}
//		//����βû�б�dp[i]��С��Ԫ�غ�dp[i]�������
//		queue.push_back(dp[i]);
//
//	}
//
//	for (int i = len; i < n; i++)
//	{
//		if (dp[i - len] == queue.front())
//		{
//			queue.pop_front();
//		}
//
//		dp[i] = queue.front() + scores[i];
//
//		while (!queue.empty() && dp[i] > queue.back())
//		{
//			queue.pop_back();
//		}
//		queue.push_back(dp[i]);
//	}
//	return dp[n - 1];
//}
//
//
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int>scores(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> scores[i];
//	}
//	int k;
//	cin >> k;
//	cout << solution(n, scores, k) << endl;
//	
//	return 0;
//}