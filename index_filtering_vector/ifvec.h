//
// Created by Gergely on 2019. 06. 09..
//

#include <vector>

#ifndef INDEX_FILTERING_VECTOR_IFVEC_H
#define INDEX_FILTERING_VECTOR_IFVEC_H


template<typename T, typename Pred>
struct index_filtering_vector{
    std::vector<T> *vec;
    bool on;
    bool inverse;

    typedef typename std::vector<T>::iterator iterator;
    typedef typename std::vector<T>::const_iterator cit;


    iterator begin(){return vec->begin();}
    iterator end(){return vec->end();}
    cit begin() const{return vec->cbegin();}
    cit end() const{return vec->cend();}


    explicit index_filtering_vector(std::vector<T> &vec) : vec(&vec),on(true),inverse(false){}

    void set_off(){
        on = false;
    }

    void set_on(){
        on = true;
    }

    T& at(int index) const{
        if(!on){
            return vec->at(index);
        }else{
            Pred pred;
            for(int i=0;i<vec->size();++i){
                if (pred(i) == inverse)
                {
                    if (index == 0)
                    {
                        return vec->at(i);
                    }
                    index--;
                }
            }
        }
    }

    int size() const{
        if(!on){
            return vec->size();
        }

        int size = 0;
        Pred pred;
        for(int i=0;i<vec->size();++i){
            if(pred(i) == inverse){
                size++;
            }
        }
        return size;
    }

    T& operator[](int index) const{
        return at(index);
    }

    void operator!(){
        inverse = !inverse;
    }


};


#endif //INDEX_FILTERING_VECTOR_IFVEC_H
