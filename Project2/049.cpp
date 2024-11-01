//#include<stdc++.h>
//using namespace std;
//long solution(int n, int m) {
//// 若输入不合法，返回-1
//		 if (n < 3 || n > 7 || m < 0) return -1;
//	
//		 // 提前计算好0~9的N次方, 避免后续进行重复计算
//		 int powN[10];
//	 for (int i = 0; i < 10; i++) {
//		 powN[i] = (int)pow(i, n);
//		
//	}
//	
//		// 最小的N位数
//		 int low = (int)pow(10, n - 1);
//	 // 最大的N位数
//		 int high = (int)pow(10, n);
//	
//		 // 记录当前水仙花数
//		 long ans = 0;
//	
//		 // 记录当前水仙花数是第几个
//		 int idx = 0;
//	
//		 for (int num = low; num < high; num++) {
//		 // 记录num各位数字的N次方之和
//			 int sum = 0;
//		
//			 // 遍历num的每一位数字
//			 int num_cp = num;
//		 while (num_cp > 0) {
//			 sum += powN[num_cp % 10];
//			 num_cp /= 10;
//			
//		}
//		
//			 // 判断num是否为水仙花数
//			 if (sum == num) {
//			 ans = num;
//			 // 如果num刚好是N位数的第m个水仙花数，则直接返回，否则继续查找
//				 if (idx++ == m) return ans;
//			
//		}
//		
//	}
//	
//		// 若m大于水仙花数的个数，返回最后一个水仙花数和m的乘积
//		 return ans * m;
//	
//}
//
// int main() {
//	 int n, m;
//	 cin >> n >> m;
//	
//		 cout << solution(n, m) << endl;
//	
//		 return 0;
//	
//}