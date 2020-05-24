//
// Created by kgbcomrade on 5/25/20.
//

#ifndef HW4_TABLE_H
#define HW4_TABLE_H

#include <vector>

class Table {
private:
    std::vector<int> values;
public:
    Table() = default;
    explicit Table(std::vector<int> init);
    void push(int value);
    int pop();
    size_t getSize();
    Table operator+(Table& other);
    Table operator++();
    Table operator++(int);
    Table operator--();
    Table operator--(int);
    int& operator[](size_t id);
};




#endif //HW4_TABLE_H
