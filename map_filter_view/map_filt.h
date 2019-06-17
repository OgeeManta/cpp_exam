//
// Created by Gergely on 2019. 06. 15..
//

#include <algorithm>

#ifndef MAP_FILTER_VIEW_MAP_FILT_H
#define MAP_FILTER_VIEW_MAP_FILT_H

template <typename K,typename V,typename Pred>
class map_filter_view{

    std::map<K,V> *cont;

public:

    typedef typename std::map<K,V>::iterator it;
    typedef typename std::map<K,V>::const_iterator cit;

    it begin(){return cont->begin();}
    it end(){return cont->end();}
    cit begin() const{ return cont->begin();}
    cit end() const{return cont->end();}

    explicit map_filter_view(std::map<K,V> &m) : cont(&m) {}

    int count(K element) const{
        int counter = 0;
        Pred pred;
        std::map<K,V> tmp;
        for(auto i = begin();i != end();++i){
            if(pred(*i) == false){
                tmp.insert(*i);
            }
        }
        for(auto i = tmp.begin(); i != tmp.end();i++){
            if(i->first == element){
                counter++;
            }
        }
        return counter;
    }

    size_t size() const{
        size_t size = 0;
        Pred pred;
        for(auto i = begin(); i != end();i++){
            if(pred(*i) == false){
                size++;
            }
        }
        return size;
    }

    V operator[](K element) const{
        for(auto i = begin(); i != end();++i){
            if(i->first == element){
                return i->second;
            }
        }
    };

};

#endif //MAP_FILTER_VIEW_MAP_FILT_H
