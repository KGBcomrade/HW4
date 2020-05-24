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
    std::vector<int> a;
    a.reserve(getSize() + other.getSize());

    a.insert(a.end(),values.begin(), values.end());
    a.insert(a.end(), other.values.begin(), other.values.end());


    return Table(a);
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
