//
// Created by Gergely on 2019. 06. 09..
//

#include <vector>

#ifndef ARERASE_ARERASE_H
#define ARERASE_ARERASE_H

template<typename T>
class array_eraser{

    T* arr;
    std::vector<T> cont;
    int filt_size;

public:

    typedef typename std::vector<T>::iterator iterator;
    typedef typename std::vector<T>::const_iterator cit;

    iterator begin(){ return cont.begin();}
    iterator end(){return cont.begin()+filt_size;}
    cit begin() const{ return cont.begin();}
    cit end() const{return cont.begin()+filt_size;}

    array_eraser(T* arr, int s) : cont(arr,arr+s),filt_size(s),arr(arr) {}

    template <size_t Size>
    explicit array_eraser(T (&arr)[Size]) : cont(arr,arr + Size),
    filt_size(Size),
    arr(arr) {}

    void print(){
        for(auto i = cont.begin();i != cont.end();++i){
            std::cout << *i << std::endl;
        }
    }

    void erase(const T& element){
        std::stable_partition(begin(),end(),[&element](auto const& tmp){ return element != tmp;});
        filt_size = filt_size - std::count(begin(),end(),element);
        std::copy(begin(),begin()+cont.size(),arr);
    }

    void erase_index(const int& index){
        std::stable_partition(begin(),end(),[&](auto const& tmp){return tmp != cont.at(index);});
        filt_size--;
        std::copy(begin(),begin()+cont.size(),arr);
    }

    int count(const T& element) const{
        return std::count(begin(),end(),element);
    }

    size_t size() const{
        return filt_size;
    }

    template <typename Pred>
    void erase_if(Pred pred){
        int i = 0;
        std::stable_partition(begin(),end(),[&pred, &i](auto const& tmp){if(!(pred(tmp))){++i;return true;}else return false;});
        filt_size = filt_size - i;
        std::copy(begin(),begin()+cont.size(),arr);
    }


};

#endif //ARERASE_ARERASE_H
