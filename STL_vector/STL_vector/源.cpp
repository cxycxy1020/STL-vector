#include <iostream>
#include<vector>
using namespace std;
int main()
{
	//push_back������β������
	vector<int>vec;
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(6);
	//iterator�������
	vector<int>::iterator it = vec.begin();
	for (; it != vec.end(); it++)
		cout << *it << endl;
	cout << vec.front() << endl;
	cout << vec.back() << endl;
}