//
// Created by kgbcomrade on 5/25/20.
//

#include "Table.h"
template<typename T>
void Table<T>::push(T value) {
    values.push_back(value);
}

template<typename T>
int Table<T>::pop() {
    Table<T> res = values.back();
    values.pop_back();
    return res;
}

template<typename T>
Table<T> Table<T>::operator+(const Table<T> &other) {
    Table<T> res(values);

    for(int i = 0; i < other.getSize(); i++)
        res.push(other[i]);
}

template<typename T>
Table<T>::Table(std::vector<T> init) {
    values = std::vector<T>(init);
}

template<typename T>
size_t Table<T>::getSize() {
    return values.size();
}

template<typename T>
Table<T> Table<T>::operator++() {
    for(auto &i : values)
        i++;
    return *this;
}

template<typename T>
Table<T> Table<T>::operator++(int) {
    auto res = *this;
    ++*this;
    return res;
}

template<typename T>
Table<T> Table<T>::operator--() {
    for(auto &i : values)
        i--;
    return *this;
}

template<typename T>
Table<T> Table<T>::operator--(int) {
    auto res = *this;
    ++*this;
    return res;
}

template<typename T>
T &Table<T>::operator[](size_t id) {
    return values[id];
}
