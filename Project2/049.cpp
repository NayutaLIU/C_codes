//#include<stdc++.h>
//using namespace std;
//long solution(int n, int m) {
//// �����벻�Ϸ�������-1
//		 if (n < 3 || n > 7 || m < 0) return -1;
//	
//		 // ��ǰ�����0~9��N�η�, ������������ظ�����
//		 int powN[10];
//	 for (int i = 0; i < 10; i++) {
//		 powN[i] = (int)pow(i, n);
//		
//	}
//	
//		// ��С��Nλ��
//		 int low = (int)pow(10, n - 1);
//	 // ����Nλ��
//		 int high = (int)pow(10, n);
//	
//		 // ��¼��ǰˮ�ɻ���
//		 long ans = 0;
//	
//		 // ��¼��ǰˮ�ɻ����ǵڼ���
//		 int idx = 0;
//	
//		 for (int num = low; num < high; num++) {
//		 // ��¼num��λ���ֵ�N�η�֮��
//			 int sum = 0;
//		
//			 // ����num��ÿһλ����
//			 int num_cp = num;
//		 while (num_cp > 0) {
//			 sum += powN[num_cp % 10];
//			 num_cp /= 10;
//			
//		}
//		
//			 // �ж�num�Ƿ�Ϊˮ�ɻ���
//			 if (sum == num) {
//			 ans = num;
//			 // ���num�պ���Nλ���ĵ�m��ˮ�ɻ�������ֱ�ӷ��أ������������
//				 if (idx++ == m) return ans;
//			
//		}
//		
//	}
//	
//		// ��m����ˮ�ɻ����ĸ������������һ��ˮ�ɻ�����m�ĳ˻�
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