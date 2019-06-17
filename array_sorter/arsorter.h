//
// Created by Betűmix on 2019. 06. 17..
//

#include <algorithm>
#include <vector>

#ifndef ARRAY_SORTER_ARSORTER_H
#define ARRAY_SORTER_ARSORTER_H

class array_sorter{
public:

    int s;
    int* arr;
    std::vector<int> original;

    array_sorter(int* _arr,int _s) : arr(_arr),s(_s) {
        std::vector<int> tmp(arr,arr+s);
        original = tmp;
        std::sort(arr,arr+s);
    }

    int size(){
        return s;
    }

    void operator-(){
        std::sort(arr, arr+s, std::greater<int>());
    }

    void operator+(){
        std::sort(arr, arr+s);
    }

    ~array_sorter(){
        std::copy(original.begin(),original.end(),arr);
    }

};

template <class T>
class array_sorter_util{
public:

    int s;
    T* arr;
    std::vector<T> original;

    array_sorter_util(T* _arr,int _s) : arr(_arr),s(_s) {
        std::vector<T> tmp(arr,arr+s);
        original = tmp;
        std::sort(arr,arr+s);
    }

    void operator-(){
        std::sort(arr, arr+s, std::greater<T>());
    }

    void operator+(){
        std::sort(arr, arr+s);
    }

    ~array_sorter_util(){
        std::copy(original.begin(),original.end(),arr);
    }

};

#endif //ARRAY_SORTER_ARSORTER_H
