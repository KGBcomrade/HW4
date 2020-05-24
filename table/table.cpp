#include <iostream>
#include <vector>
#include "Table.h"

using namespace std;

int main() {
	Table t;
	t.push(228);
	t.push(5465);
	for(int i = 0; i < 2; i++)
		cout << t[i] << endl;
	t++;
	Table t2;
	t2.push(777);
	t2.push(888);
	t2.push(666);
	cout << t2.pop() << endl;
	--t2;
	auto g = t + t2;
	for(int i = 0; i < 4; i++) 
		cout << g[i] << endl;

	return 0;
}
