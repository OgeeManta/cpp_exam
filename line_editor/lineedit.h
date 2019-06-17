//
// Created by Gergely on 2019. 06. 13..
//

#include <vector>
#include <list>
#include <string>

#ifndef LINE_EDITOR_LINEEDIT_H
#define LINE_EDITOR_LINEEDIT_H

template<typename Cont,typename T>
class line_editor{
public:
    std::list<T> line;
    typename std::list<T>::iterator cursor;

    line_editor() : cursor(line.end()){}

    void press(T c){
        cursor = line.insert(cursor,c);
        cursor++;
    }

    void home(){
        cursor = line.begin();
    }

    Cont enter(){
        Cont ret(line.begin(),line.end());
        line.clear();
        cursor = line.end();
        return ret;
    }

};


#endif //LINE_EDITOR_LINEEDIT_H
