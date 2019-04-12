#include <iostream>
#include<vector>
using namespace std;
int main()
{
	//push_back从向量尾部插入
	vector<int>vec;
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(6);
	//iterator遍历输出
	vector<int>::iterator it = vec.begin();
	for (; it != vec.end(); it++)
		cout << *it << endl;
	cout << vec.front() << endl;
	cout << vec.back() << endl;
}