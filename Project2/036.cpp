///****************************************��������*************************************************/
//#include <stdc++.h>
//using namespace std;
//struct Node {
//	struct Node* lchild{};
//	struct Node* rchild{};
//	int weight;
//	int height;
//	Node(int weight, int height) : weight(weight), height(height) {};
//	Node(Node* lchild, Node* rchild, int weigh, int height) : lchild(lchild), rchild(rchild), weight(weigh), height(height) {}
//};
//
//
//class Compare {
//public:
//	bool operator()(Node* a, Node* b) {
//		// ��Ŀ˵�������ҽڵ�Ȩֵ��ͬʱ���������߶�С�ڵ����������߶ȡ���˵���
//		//��Ȩ����ͬʱ���ٰ��սڵ������߶�����
//			if (a->weight != b->weight) {
//				return a->weight > b->weight;
//			}
//			else {
//				return a->height > b->height;
//			}
//	}
//};
//void midOrder(Node* root) {
//	// ������������ȱ��������������������ٱ����������ĸ���������������������
//	//��
//		if (root->lchild != nullptr) {
//			midOrder(root->lchild);
//		}
//	cout << root->weight << " ";
//	if (root->rchild != nullptr) {
//		midOrder(root->rchild);
//	}
//}
//int main() {
//	int n;
//	cin >> n;
//	// �����������ڵ�������򣬷������ɸѡ��Ȩֵ��С�������ڵ�
//	priority_queue<Node*, vector<Node*>, Compare> pq;
//	//Node*��Ԫ�����ͣ�vector<Node*>���������ͣ�Compare�ǱȽ�����
//
//	// ���� n �����������ڵ�
//	for (int i = 0; i < n; i++) {
//		int w;
//		cin >> w;
//		// �������ȶ���
//		Node* node = new Node(w, 0);
//		pq.push(node);
//	}
//	// ��ʼ n ���ڵ㾭�����ֺϲ���ֻʣһ���ڵ�ʱ����ô�ýڵ���ǹ��������ĸ��ڵ㣬
//	//��˵����ȶ�����ֻʣһ���ڵ�ʱ����ֹͣ�ϲ�
//		while (pq.size() > 1) {
//			// ȡ�����ȶ�����ǰ����Ȩֵ��С�Ľڵ㣬�������ȶ����Ѱ��� [�ڵ�Ȩ�أ���
//			//�������߶�] �������ȼ�������ȳ����Ŀ϶���Ȩ��С�����߸߶�С�Ľڵ㣬����Ϊ�½ڵ�
//			//��������
//				Node* lc = pq.top();
//			pq.pop();
//			Node* rc = pq.top();
//			pq.pop();
//			// �� lc �� rc �ϲ����ϲ����½ڵ� fa ��Ȩ�أ��������ӽڵ�Ȩ��֮�ͣ�fa �����߶�
//			//= rc �����߶� + 1; PS��rc �ĸ߶� >= lc �ĸ߶�
//				int fa_weight = lc->weight + rc->weight;
//			// int fa_height = rc->height + 1; // �����߼������⣬����ʵ�ʿ��Կ�������
//			int fa_height = max(lc->height, rc->height) + 1; // ����һЩ����£�������ȨֵС��
//			//������Ȩֵ�������������߶ȴ����������߶ȣ�����һ������ rc �߶� >= lc �߶�
//				// ���ϲ�����½ڵ�������ȶ���
//				Node * fa = new Node(lc, rc, fa_weight, fa_height);
//			pq.push(fa);
//		}
//	// ������ȶ����б�Ȼֻʣһ���ڵ㣬�����������ĸ��ڵ㣬��ʱ�Դ˸��ڵ㣨����
//	//�����������������
//		Node* root = pq.top();
//	midOrder(root);
//	return 0;
//}