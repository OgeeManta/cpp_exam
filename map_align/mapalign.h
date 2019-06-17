//
// Created by Gergely on 2019. 06. 16..
//

#include <map>
#include <vector>

#ifndef MAP_ALIGN_MAPALIGN_H
#define MAP_ALIGN_MAPALIGN_H

template <typename K,typename V, typename Pred = std::less<K>>
class map_aligner{
public:

    std::vector<std::map<K,V,Pred>*> vec;
    bool gotFiller;
    V filler;

    map_aligner() : gotFiller(false) {}

    void add(std::map<K,V,Pred> &m){
        vec.push_back(&m);
    }

    void align(){
        for(unsigned int i=0;i<vec.size();i++){
            for(unsigned int n=0;n<vec.size();n++){
                if(n!=i)
                    align_two(vec.at(i),vec.at(n));
            }
        }
    }

    void set_filler(V v){
        gotFiller = true;
        filler = v;
    }

    void erase(K key){
        for(auto i = 0;i < vec.size();++i){
            (*vec.at(i)).erase(key);
        }
    }

    void eraser(V value){
        for(auto i = 0;i<vec.size();++i){
            for(auto j = (*vec.at(i)).begin();j != (*vec.at(i)).end();++j){
                typename std::map<K,V,Pred>::iterator it;
                it = (*vec.at(i)).find(value);
                (*vec.at(i)).erase(it);
            }
        }
    }

    size_t count(){
        return vec.size();
    }

    map_aligner<K,V,Pred> &operator+=(std::map<K,V,Pred> &rhs){
        (*this).add(rhs);
        return *this;
    }



private:

    void align_two(std::map<K,V,Pred> *map1, std::map<K,V,Pred> *map2){
        for(typename std::map<K,V,Pred>::iterator it = map1->begin() ; it!=map1->end();++it){
            if(!gotFiller) {
                (*map2)[it->first];
            }else if((*map2).find((*it).first) == (*map2).end()){
                (*map2)[(*it).first] = filler;
            }
        }
        for(typename std::map<K,V,Pred>::iterator it = (*map2).begin() ; it!=(*map2).end();++it){
            if(!gotFiller){
                (*map1)[(*it).first];
            }else if((*map1).find((*it).first) == (*map1).end()){
                (*map1)[(*it).first] = filler;
            }
        }
    }

};

#endif //MAP_ALIGN_MAPALIGN_H
