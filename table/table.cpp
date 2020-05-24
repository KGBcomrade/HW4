#include <iostream>
#include <vector>
#include "Table.h"

using namespace std;

int main() {
	Table t;
	t.push(228);
	t.push(5465);
	for(size_t i = 0; i < t.getSize(); i++)
		cout << t[i] << endl;
	auto t1 = t++;
	Table t2;
	t2.push(777);
	t2.push(888);
	t2.push(666);
	cout << t2.pop() << endl;
	--t2;
	auto g = t + t2 + t1;
	for(size_t i = 0; i < g.getSize(); i++)
		cout << g[i] << endl;

	return 0;
}
