///**********************************************************************/
//#include<iostream>
//#include<vector>
//#include<unordered_set>
//#include<algorithm>
//
//using namespace std;
//
//int main() {
//    //��������
//    int N;
//    cin >> N;
//    int M;
//    cin >> M;
//    unordered_set<int> deadTrees;    //δ�������ı��
//    for (int i = 0; i < M; i++) {
//        int temp;
//        cin >> temp;
//        deadTrees.insert(temp);
//    }
//    int K;
//    cin >> K;
//
//    vector<bool> trees(N + 1, true);    //trees[i]��ʾ��i�����Ƿ���
//    for (int i = 1; i < N + 1; i++) {
//        if (deadTrees.find(i) != deadTrees.end()) {
//            trees[i] = false;
//        }
//        //cout << trees[i] << " ";
//    }
//
//    int result = 0;
//
//    for (int i = 1; i < trees.size(); i++) {
//        //���ѭ��������trees[i]��ͷ���������������
//        int count = K;    //��ʣ�¶��ٿ��ܲ��ֵ���
//        int currMax = 0;
//        if (trees[i]) {
//            currMax++;
//        }
//        else {
//            if (count >= 1) {
//                currMax++;
//                count--;
//            }
//            else {
//                continue;
//            }
//        }
//        for (int j = i + 1; j < trees.size(); j++) {
//            if (trees[j]) {
//                currMax++;
//            }
//            else {
//                if (count >= 1) {
//                    currMax++;
//                    count--;
//                }
//                else {
//                    break;
//                }
//
//            }
//        }
//        result = max(result, currMax);
//
//    }
//
//    cout << result << endl;
//
//
//    return 0;
//}
