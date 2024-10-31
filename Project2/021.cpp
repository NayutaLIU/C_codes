///********************************************树的算法***********************************************************/
//#include<stdc++.h>
//using namespace std;
//
//struct TreeNode
//{
//	int val;
//	int height{ 0 };
//	struct TreeNode* left{};
//	struct TreeNode* right{};
//	struct TreeNode* mid{};  //指针成员变量 left、right 和 mid 使用了大括号 {} 初始化，
//	                         //这是 C++11 引入的零初始化语法。在 C++11 之前的版本中，
//							 //您需要使用 nullptr 或 NULL 来初始化指针。
//
//	explicit TreeNode(int val) :val(val) {}; //强制显式构造，避免隐式转换
//};
//
//class Tree
//{
//public:
//	struct TreeNode* root{};
//	int height{0};
//	
//	void add(int val)
//	{
//		auto* node = new TreeNode(val);
//
//		if (this->root == nullptr)
//		{
//			//若树为空，则当前创建的节点将成为根节点
//			node->height = 1;
//			this->root = node;
//			this->height = 1;
//
//		}
//		else
//		{
//			//若不为空，则从根节点开始比较
//			struct TreeNode* cur = this->root;
//			while (true)
//			{
//				//假设创建的节点node是当前节点cur的子节点，则node节点高度值=cur节点高度值+1
//				node->height = cur->height + 1; //如果创建的node进入新层，则更新树的高度
//				this->height = max(node->height, this->height);
//
//				if (val < cur->val - 500) {
//					//若数小于节点的数-500，则将数插入树的左子树
//					if (cur->left == nullptr)
//					{
//						//若cur节点没左子树，那么node就作为cur节点的左子树
//						cur->left = node;
//						//停止探索
//						break;
//					}
//					else
//					{
//						//否则继续探索
//						cur = cur->left;
//					}
//				}
//				else if (val > cur->val + 500)
//				{
//					//如果数大于节点的数+500，则将数插入节点的右子树
//					if (cur->right == nullptr)
//					{
//						cur->right = node;
//						break;
//					}
//					else
//					{
//						cur = cur->right; //向右继续探索
//					}
//				}
//				else
//				{
//					//否则把数插到节点的中子树
//					if (cur->mid == nullptr)
//					{
//						cur->mid = node;
//						break;
//					}
//					else
//					{
//						cur = cur->mid;
//					}
//				}
//				
//			}
//		}
//	}
//};
//
//
//int main()
//{
//	int n;
//	cin >> n;
//	Tree tree;
//
//	for (int i = 0; i < n; i++)
//	{
//		int num;
//		cin >> num;
//		tree.add(num);
//	}
//	cout << tree.height << endl;
//
//	return 0;
//	
//}

