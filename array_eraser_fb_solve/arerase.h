
#ifndef ARERASE_H
#define ARERASE_H

//Gyenes András Dávid
//I1OIP6

#include <vector>
#include <algorithm>
#include <iostream>

template<class T>
class array_eraser
{
    std::vector<T> cont;
    T* arr;
    int filt_size;
public:
    typedef typename std::vector<T>::iterator iterator;
    typedef typename std::vector<T>::const_iterator cit;


    iterator begin(){return cont.begin();}
    iterator end(){return cont.begin()+filt_size;}
    cit begin() const{return cont.cbegin();}
    cit end() const{return cont.cbegin()+filt_size;}

    array_eraser(T* arr, int size) : cont(arr,arr+size), filt_size(size), arr(arr) {}

    template<size_t Size>
    array_eraser(T (&arr)[Size]) : cont(arr,arr+Size), arr(arr), filt_size(Size){}

    void erase(const T& element){
        std::stable_partition(begin(), end(), [&element](auto const& tmp){return element != tmp;});
        filt_size -= std::count(begin(),end(), element);
        std::copy(begin(), begin()+cont.size(), arr);
    }

    void print(){
        for(auto i = cont.begin();i != cont.end();++i){
            std::cout << *i << std::endl;
        }
    }

    size_t size() const {
        return filt_size;
    }



    void erase_index(const int& index){
        std::stable_partition(begin(),end(), [&](auto const& tmp){return tmp != cont.at(index);});
        filt_size--;
        std::copy(begin(), begin()+cont.size(), arr);
    }

    size_t count(const T& element) const{
        return std::count(begin(), end(), element);
    }

    template<class Pred>
    void erase_if(Pred pred){
        int i = 0;
        std::stable_partition(begin(), end(), [&pred, &i](auto const& tmp) {if (!(pred(tmp))){++i; return true;} else return false;});
        filt_size-= i;
        std::copy(begin(), begin()+cont.size(), arr);
    }

};

#endif // ARERASE_H