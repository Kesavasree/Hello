#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	vector<int>v1 = { 10,20,30,30,40,50,50 };

	vector<int>::iterator it = adjacent_find(v1.begin(), v1.end(), 30);

	cout << *it << endl;

}