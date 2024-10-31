///****************************动态规划（滑块）+单调队列*******************************************************/
//#include<stdc++.h>
//using namespace std;
//
//int solution(int n, vector<int>scores, int k)
//{
//	int len = k + 1;
//	//dp[i]表示跳到第i个格子能得到的最大分数
//	vector<int>dp(n);
//	for (int i = 0; i < n; i++)
//	{
//		dp[i] = 0;
//	}
//	dp[0] = scores[0];
//
//	//单调队列
//	deque<int>queue; //设置一个双端队列
//	queue.push_back(dp[0]);
//
//	//初始滑块的形成过程
//	for (int i = 1; i < min(len, n); i++)
//	{
//		//dp[i]=max(dp[0]~dp[i-1]+scores[i])
//		dp[i] = queue.front() + scores[i];
//
//		while (!queue.empty() && dp[i] > queue.back())
//		{
//			queue.pop_back();
//		}
//		//当队尾没有比dp[i]更小的元素后，dp[i]才能入队
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