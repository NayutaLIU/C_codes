//#include <stdc++.h>
//
// using namespace std;
//
// // ������ӳ��Ϊ����
// int card2Num(const string & card) {
//	if (card == "J") {
//		 return 11;
//		
//	}
//	else if (card == "Q") {
//		 return 12;
//		
//	}
//	else if (card == "K") {
//		return 13;
//		
//	}
//	else if (card == "A") {
//		 return 14;
//		
//	}
//	else if (card == "2") {
//		 return 16;
//		
//	}
//	else {
//		 return stoi(card);
//		
//	}
//	
//}
//
// int main() {
//	 // ����13����
//		 vector<string> cards(13);
//	 for (int i = 0; i < 13; i++) {
//		 cin >> cards[i]; 
//	}
//	
//		 // �ƴ�С����
//		 sort(cards.begin(), cards.end(), [](const string& a, const string& b) {
//		 return card2Num(a) < card2Num(b);
//		 });
//	
//		 // ��¼˳��
//		 vector<vector<string>> straights;
//	
//		 // �����������
//		 for (auto& card : cards) {
//		 int j = 0;
//		 for (; j < straights.size(); j++) 
//		 {
//			 if (card2Num(card) - card2Num(straights[j].back()) == 1) 
//			 {
//				// ���card�����˳�����һ�������1�������ƴ�ӵ���˳��β��
//				 straights[j].emplace_back(card);
//				 break;
//			}
//		}
//			// ���card�޷�ƴ�ӵ�����˳�ӵ�β��, �����½���һ��˳��, ��˳����card��ͷ
//			 if (j == straights.size()) {
//		 straights.emplace_back(vector<string>{card});
//		}
//		
//	}
//	
//		// ��¼����Ҫ���˳�ӣ�������>=5���ĸ���
//		int count = 0;
//	 for (const auto& straight : straights) {
//		 if (straight.size() < 5) {
//		 continue;
//			
//		}
//		
//			 count++;
//		
//			 for (const auto& card : straight) {
//			 cout << card << " ";
//			
//		}
//		
//			 cout << endl;
//		
//	}
//	
//		 // ���û��������ƹ����˳�ӣ������No
//	 if (count == 0) {
//		 cout << "No" << endl;
//		
//	}
//	
//		 return 0;
//	
//}