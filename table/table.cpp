#include <iostream>
#include <vector>
#include "Table.h"

using namespace std;


//class Table {
//	private:
//		vector<T> values;
//	public:
//		void push(T value) {
//			values.push_back(value);
//		}
//
//		T pop() {
//			T res = values[values.size() - 1];
//			values.pop_back();
//			return res;
//		}
//
//		size_t getSize() {
//			return values.size();
//		}
//
//		T& operator[](int id) {
//			return values[id];
//		}
//
//		Table<T>& operator+(const Table<T>& other) {
//			Table<T> res;
//			for(auto &i : values)
//				res.push(i);
//			for(size_t i = 0; i < other.getSize(); i++)
//				res.push(other[i]);
//			return res;
//		}
//
//		Table<T>& operator++() {
//			for(auto &i : values)
//				i++;
//			return *this;
//		}
//
//		Table<T>& operator--() {
//			for(auto &i : values)
//				i--;
//			return *this;
//		}
//
//		Table<T>& operator++(int) {
//			Table<T> res = *this;
//			++*this;
//			return res;
//		}
//
//		Table<T>& operator--(int) {
//			Table<T> res = *this;
//			--*this;
//			return res;
//		}
//
//
//};

int main() {
	Table<int> t;
	t.push(228);
	t.push(5465);
	for(int i = 0; i < 2; i++)
		cout << t[i] << endl;
	t++;
	Table<int> t2;
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
