//
// Created by Gergely on 2019. 06. 14..
//

#include <set>

#ifndef MULTI_SET_MULTI_VIEW_MSMVIEW_H
#define MULTI_SET_MULTI_VIEW_MSMVIEW_H


template <typename T>
class multisets_merge_view{
public:

    std::multiset<T> *a;
    std::multiset<T> *b;

    multisets_merge_view(std::multiset<T> _a, std::multiset<T> _b) : a(&_a), b(&_b){
        typename std::multiset<T>::iterator it_a = a->begin();
        typename std::multiset<T>::iterator it_b = b->begin();
        while(it_a != a->end()){
            if(it_b != b->end()){
                if(*it_a > *it_b){
                    T tmp_a = *it_a;
                    T tmp_b = *it_b;

                    *it_a = tmp_b;
                    *it_b = tmp_a;
/*
                    a->erase(it_a);
                    a->insert(it_a,tmp_b);
                    b->erase(it_b);
                    b->insert(it_b,tmp_a);
                    */
                    it_a++;
                }else{
                    it_b++;
                }
            }
        }
    }


};


#endif //MULTI_SET_MULTI_VIEW_MSMVIEW_H
