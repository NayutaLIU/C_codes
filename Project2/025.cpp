//#include <stdc++.h>
//using namespace std;
//
//vector<string> split(string& s, char delimiter)
//{
//	stringstream ss(s);
//	string token;
//
//	vector<string>res;
//	while (getline(ss, token, delimiter))
//	{
//		res.emplace_back(token);
//	}
//	return res;
//}
//
//bool compareWithZero(double val, string& constraint)
//{
//	bool flag = false;	
//
//	if (constraint == ">")
//	{
//		flag = val > 0;
//	}
//	else if (constraint == ">=")
//	{
//		flag = val >= 0;
//	}
//	else if (constraint == "<")
//	{
//		flag = val < 0;
//	}
//	else if (constraint == "<=")
//	{
//		flag = val <= 0;
//	}
//	else {
//		flag = val == 0;
//	}
//	return flag;
//}
//
//int main()
//{
//	string s;
//	cin >> s;
//	vector<string>arr = split(s, ';');
//	vector<string>a1 = split(arr[0], ',');
//	vector<string>a2 = split(arr[1], ',');
//	vector<string>a3 = split(arr[2], ',');
//	vector<string>x = split(arr[3], ',');
//	vector<string>b = split(arr[4], ',');
//	vector<string>y = split(arr[5], ',');
//
//	double diff1=
//		stod(a1[0])*stoi(x[0])+stod(a1[1])*stoi(x[1])+stod(a1[2])*stoi(x[2])+ stod(a1[3]) * stoi(x[3]) + stod(a1[4]) * stoi(x[4]) - stod(b[0]);
//	double diff2=
//		stod(a2[0]) * stoi(x[0]) + stod(a2[1]) * stoi(x[1]) + stod(a2[2]) * stoi(x[2]) + stod(a2[3]) * stoi(x[3]) +stod(a2[4]) * stoi(x[4]) - stod(b[1]);
//	double diff3=
//		stod(a3[0]) * stoi(x[0]) + stod(a3[1]) * stoi(x[1]) + stod(a3[2]) * stoi(x[2]) + stod(a3[3]) * stoi(x[3]) +stod(a3[4]) * stoi(x[4]) - stod(b[2]);
//	bool flag = compareWithZero(diff1, y[0]) && compareWithZero(diff2, y[1]) && compareWithZero(diff3, y[2]);
//
//	double maxDiff = max(max(diff1, diff2), diff3);
//	cout << (flag ? "true" : "false") << " " << (int)maxDiff << endl;
//	return 0;
//}