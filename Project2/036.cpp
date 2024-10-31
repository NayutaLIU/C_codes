///****************************************哈夫曼树*************************************************/
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
//		// 题目说：当左右节点权值相同时，左子树高度小于等于右子树高度。因此当节
//		//点权重相同时，再按照节点子树高度升序
//			if (a->weight != b->weight) {
//				return a->weight > b->weight;
//			}
//			else {
//				return a->height > b->height;
//			}
//	}
//};
//void midOrder(Node* root) {
//	// 中序遍历，即先遍历二叉树的左子树，再遍历二叉树的根，最后遍历二叉树的右子
//	//树
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
//	// 将哈夫曼树节点进行排序，方便后面筛选出权值最小的两个节点
//	priority_queue<Node*, vector<Node*>, Compare> pq;
//	//Node*是元素类型，vector<Node*>是容器类型，Compare是比较类型
//
//	// 创建 n 个哈夫曼树节点
//	for (int i = 0; i < n; i++) {
//		int w;
//		cin >> w;
//		// 加入优先队列
//		Node* node = new Node(w, 0);
//		pq.push(node);
//	}
//	// 初始 n 个节点经过多轮合并，只剩一个节点时，那么该节点就是哈夫曼树的根节点，
//	//因此当优先队列中只剩一个节点时即可停止合并
//		while (pq.size() > 1) {
//			// 取出优先队列中前两个权值最小的节点，由于优先队列已按照 [节点权重，节
//			//点子树高度] 升序优先级，因此先出来的肯定是权重小，或者高度小的节点，即作为新节点
//			//的左子树
//				Node* lc = pq.top();
//			pq.pop();
//			Node* rc = pq.top();
//			pq.pop();
//			// 将 lc 和 rc 合并，合并后新节点 fa 的权重，是两个子节点权重之和，fa 子树高度
//			//= rc 子树高度 + 1; PS：rc 的高度 >= lc 的高度
//				int fa_weight = lc->weight + rc->weight;
//			// int fa_height = rc->height + 1; // 这行逻辑有问题，但是实际考试可以满分
//			int fa_height = max(lc->height, rc->height) + 1; // 存在一些情况下，左子树权值小于
//			//右子树权值，但是左子树高度大于右子树高度，即不一定总是 rc 高度 >= lc 高度
//				// 将合并后的新节点加入优先队列
//				Node * fa = new Node(lc, rc, fa_weight, fa_height);
//			pq.push(fa);
//		}
//	// 最后优先队列中必然只剩一个节点，即哈夫曼树的根节点，此时对此根节点（哈夫
//	//曼树）进行中序遍历
//		Node* root = pq.top();
//	midOrder(root);
//	return 0;
//}