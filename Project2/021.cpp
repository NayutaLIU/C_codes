///********************************************�����㷨***********************************************************/
//#include<stdc++.h>
//using namespace std;
//
//struct TreeNode
//{
//	int val;
//	int height{ 0 };
//	struct TreeNode* left{};
//	struct TreeNode* right{};
//	struct TreeNode* mid{};  //ָ���Ա���� left��right �� mid ʹ���˴����� {} ��ʼ����
//	                         //���� C++11 ��������ʼ���﷨���� C++11 ֮ǰ�İ汾�У�
//							 //����Ҫʹ�� nullptr �� NULL ����ʼ��ָ�롣
//
//	explicit TreeNode(int val) :val(val) {}; //ǿ����ʽ���죬������ʽת��
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
//			//����Ϊ�գ���ǰ�����Ľڵ㽫��Ϊ���ڵ�
//			node->height = 1;
//			this->root = node;
//			this->height = 1;
//
//		}
//		else
//		{
//			//����Ϊ�գ���Ӹ��ڵ㿪ʼ�Ƚ�
//			struct TreeNode* cur = this->root;
//			while (true)
//			{
//				//���贴���Ľڵ�node�ǵ�ǰ�ڵ�cur���ӽڵ㣬��node�ڵ�߶�ֵ=cur�ڵ�߶�ֵ+1
//				node->height = cur->height + 1; //���������node�����²㣬��������ĸ߶�
//				this->height = max(node->height, this->height);
//
//				if (val < cur->val - 500) {
//					//����С�ڽڵ����-500��������������������
//					if (cur->left == nullptr)
//					{
//						//��cur�ڵ�û����������ônode����Ϊcur�ڵ��������
//						cur->left = node;
//						//ֹͣ̽��
//						break;
//					}
//					else
//					{
//						//�������̽��
//						cur = cur->left;
//					}
//				}
//				else if (val > cur->val + 500)
//				{
//					//��������ڽڵ����+500����������ڵ��������
//					if (cur->right == nullptr)
//					{
//						cur->right = node;
//						break;
//					}
//					else
//					{
//						cur = cur->right; //���Ҽ���̽��
//					}
//				}
//				else
//				{
//					//��������嵽�ڵ��������
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

