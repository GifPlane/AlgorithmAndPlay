#include<iostream>
#include<map>
#include<vector>

/*
给出一个数组，找到重复的数字以及他们的位置
*/

using namespace std;

void main(){

	int arr1[] = { 1, 1, 2, 2, 1, 3, 4, 3, 5, 2, 3, 1, 2, 3, 4, 5 };
	map<int, vector<int>> arrMap;
	int i = 0;
	for each (auto c in arr1)
	{
		arrMap[c].push_back(i++);
	}

}