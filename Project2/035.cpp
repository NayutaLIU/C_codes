//#include <stdc++.h>
//
// using namespace std;
//
// // 将牌面映射为数字
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
//	 // 输入13张牌
//		 vector<string> cards(13);
//	 for (int i = 0; i < 13; i++) {
//		 cin >> cards[i]; 
//	}
//	
//		 // 牌大小升序
//		 sort(cards.begin(), cards.end(), [](const string& a, const string& b) {
//		 return card2Num(a) < card2Num(b);
//		 });
//	
//		 // 记录顺子
//		 vector<vector<string>> straights;
//	
//		 // 遍历输入的牌
//		 for (auto& card : cards) {
//		 int j = 0;
//		 for (; j < straights.size(); j++) 
//		 {
//			 if (card2Num(card) - card2Num(straights[j].back()) == 1) 
//			 {
//				// 如果card牌面比顺子最后一张牌面大1，则可以拼接到该顺子尾部
//				 straights[j].emplace_back(card);
//				 break;
//			}
//		}
//			// 如果card无法拼接到已有顺子的尾部, 则重新建立一个顺子, 该顺子以card开头
//			 if (j == straights.size()) {
//		 straights.emplace_back(vector<string>{card});
//		}
//		
//	}
//	
//		// 记录符合要求的顺子（牌数量>=5）的个数
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
//		 // 如果没有满足出牌规则的顺子，请输出No
//	 if (count == 0) {
//		 cout << "No" << endl;
//		
//	}
//	
//		 return 0;
//	
//}