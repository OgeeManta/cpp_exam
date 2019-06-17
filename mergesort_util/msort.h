//
// Created by Gergely on 2019. 06. 14..
//

#ifndef MERGESORT_UTIL_MSORT_H
#define MERGESORT_UTIL_MSORT_H

#include <vector>
#include <algorithm>



template<class T, class Pred=std::less<T>>
class mergesort_util {
public:

    T* arr;
    int size;
    bool merge;

    mergesort_util(T* _arr,int s,bool merge) : arr(_arr), size(s), merge(merge) {}

    mergesort_util(T* _arr,int s) : arr(_arr), size(s) {
        Pred pred;
        std::sort(arr,arr+s,pred);
    }

    void split(int from, int to){
        T tmp;
        for(auto i = from; i < to ;i+=2){
            if(arr[i] > arr[i+1]){
                tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
            }
        }
    }

    void set_merge_on(){
        merge = true;
    };

    void sort(){
        Pred pred;
        std::sort(arr,arr+size,pred);
    }

};

template <class T,class Pred>
void mergesort(T* arr,int s,Pred pred){
    std::sort(arr,arr + s,pred);
}

template <class T>
void mergesort(T* arr, int s){
    std::sort(arr,arr + s);
}

template <class T,class Pred>
void mergesort(std::vector<T> &vec, Pred pred){
    std::sort(vec.begin(),vec.end(),pred);
}

template <class T>
void mergesort(std::vector<T> &vec){
    std::sort(vec.begin(),vec.end());
}

#endif //MERGESORT_UTIL_MSORT_H
