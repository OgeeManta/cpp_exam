//
// Created by Gergely on 2019. 06. 14..
//

#ifndef MULTISETS_PREDICATE_VIEW_MSETSVIEW_H
#define MULTISETS_PREDICATE_VIEW_MSETSVIEW_H

#include <vector>
#include <set>


template<class T, class Pred1,class Pred2=std::less<T>,class Pred3=std::less<T>>
class multisets_predicate_view{

public:

    std::multiset<T,Pred2> *ms_1;
    std::multiset<T,Pred3> *ms_2;
    std::multiset<T> ms_all;
    std::multiset<T> ms_1_orig;
    std::multiset<T> ms_2_orig;

    typedef typename std::multiset<T,Pred2>::iterator iterator;
    typedef typename std::multiset<T,Pred2>::const_iterator const_iterator;

    iterator begin(){return ms_all.begin();}
    iterator end(){return ms_all.end();}
    const_iterator begin() const{ return ms_all.begin();}
    const_iterator end() const{return ms_all.end();}

    multisets_predicate_view(std::multiset<T,Pred2> &first, std::multiset<T,Pred3> &second, Pred1 pred) {
        for(T elem : first){
            ms_1_orig.insert(elem);
            ms_all.insert(elem);
        }

        for(T elem : second){
            ms_2_orig.insert(elem);
            ms_all.insert(elem);
        }

        ms_1 = &first;
        ms_2 = &second;

        first.clear();
        second.clear();

        for(T elem : ms_1_orig){
            if(pred(elem)){
                first.insert(elem);
            }else{
                second.insert(elem);
            }
        }

        for(T elem : ms_2_orig){
            if(pred(elem)){
                first.insert(elem);
            }else{
                second.insert(elem);
            }
        }
    }

    multisets_predicate_view(std::multiset<T,Pred2> &first, std::multiset<T,Pred3> &second) {
        for(T elem : first){
            ms_1_orig.insert(elem);
            ms_all.insert(elem);
        }

        for(T elem : second){
            ms_2_orig.insert(elem);
            ms_all.insert(elem);
        }

        ms_1 = &first;
        ms_2 = &second;

        first.clear();
        second.clear();

        Pred1 pred;
        for(T elem : ms_1_orig){
            if(pred(elem)){
                first.insert(elem);
            }else{
                second.insert(elem);
            }
        }

        for(T elem : ms_2_orig){
            if(pred(elem)){
                first.insert(elem);
            }else{
                second.insert(elem);
            }
        }
    }

    int count(T element){
        int counter = 0;
        for(T elem : *ms_1){
            if(elem == element){
                counter++;
            }
        }
        for(T elem : *ms_2){
            if(elem == element){
                counter++;
            }
        }
        return counter;
    }

    size_t size(){
        size_t s = 0;
        s = s + ms_1->size();
        s = s + ms_2->size();
        return s;
    }

    ~multisets_predicate_view(){
        ms_1->clear();
        for(T elem : ms_1_orig){
            ms_1->insert(elem);
        }
        ms_2->clear();
        for(T elem : ms_2_orig){
            ms_2->insert(elem);
        }
    }



};

#endif //MULTISETS_PREDICATE_VIEW_MSETSVIEW_H
