//
// Created by kgbcomrade on 5/25/20.
//

#include "Table.h"

#include <utility>
void Table::push(int value) {
    values.push_back(value);
}

int Table::pop() {
    int res = values.back();
    values.pop_back();
    return res;
}

Table Table::operator+(Table &other) {
    Table res(values);

    for(size_t i = 0; i < other.getSize(); i++)
        res.push(other[i]);

    return res;
}

Table::Table(std::vector<int> init) {
    values = std::move(init);
}

size_t Table::getSize() {
    return values.size();
}

Table Table::operator++() {
    for(auto &i : values)
        i++;
    return *this;
}

Table Table::operator++(int) {
    auto res = *this;
    ++*this;
    return res;
}

Table Table::operator--() {
    for(auto &i : values)
        i--;
    return *this;
}

Table Table::operator--(int) {
    auto res = *this;
    ++*this;
    return res;
}

int &Table::operator[](size_t id) {
    return values[id];
}
