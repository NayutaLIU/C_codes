///**********************       ��ϣ�㷨       **************************************************/
//#include<iostream>
//#include<vector>
//#include<map>
//#include<string>
//#include<algorithm>
//
//using namespace std;
//
//int main()
//{
//    vector<int>steps;
//    getchar(); //�ն�1���ַ�
//    int tmp; //��ʱ�����ַ�
//    while (cin >> tmp)
//    {
//        steps.emplace_back(tmp);
//        if (getchar() != ',')
//        {
//            break;
//        }
//    }
//    //ָ��Ŀ��ֵ
//    int count;
//    cin >> count;
//    /*�����������������*/
//
//
//
//    map<int, int>hash;//������ϣ��
//
//    int minIdxSum = INT_MAX; //�����к͵ĳ�ʼֵ��ΪMAX�������������С���к�
//
//    string ans; //���ս��
//
//    for (int i = 0; i < steps.size(); i++)//��������steps
//    {
//        int step1 = steps[i];
//        int step2 = count - step1;
//
//        /*     ע��find()��������hash�м�ֵΪstep2��Ԫ��     */
//        if (hash.find(step2) != hash.end())//�����hash�����ҵ��˶�Ӧ��step2
//        {
//            int idx2 = hash[step2];//��keyΪstep2�е�val����idx2
//            int idxSum = i + idx2;
//            if (idxSum < minIdxSum)
//            {
//                minIdxSum = idxSum;
//                ans = "[" + to_string(step2) + "," + to_string(step1) + "]";
//            }
//        }
//        else//�����hash����û�ҵ���Ӧ��step2���������ֿ��ܣ�
//
//       //1.��Ӧ��step1��û��¼�룬�����if���¼��step1���������������г�������step1��Ӧ��step2�Ļ����Ϳ���ֱ���ҵ���Ӧ��step1��
//       //2.��Ӧ��step1�Ѿ�¼�룬���������if����ж�Ϊfalse���������˵��step1û�ж�Ӧ��step2���޷���ӵõ�count
//        {
//            if (hash.find(step1) == hash.end())//����Ҳ�����Ӧ��step1������˵��û¼���������֣�
//            {
//                //¼��������֣���keyΪstep1��λ���ϣ���i��ֵ��val
//                hash[step1] = i;
//
//            }
//
//        }
//    }
//    //forѭ������������ansһ����idxSum��С��һ�����ݣ��������
//    cout << ans << endl;
//
//    return 0;
//}