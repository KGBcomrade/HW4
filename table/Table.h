//
// Created by kgbcomrade on 5/25/20.
//

#ifndef HW4_TABLE_H
#define HW4_TABLE_H

#include <vector>

template <typename T>
class Table {
private:
    std::vector<T> values;
public:
    Table() = default;
    explicit Table(std::vector<T> init);
    void push(T value);
    int pop();
    size_t getSize();
    Table<T> operator+(const Table<T>& other);
    Table<T> operator++();
    Table<T> operator++(int);
    Table<T> operator--();
    Table<T> operator--(int);
    T& operator[](size_t id);
};




#endif //HW4_TABLE_H
