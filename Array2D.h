//
// Created by ZhouDaxia on 2018/6/29.
//

#ifndef DS_ARRAY2D_H
#define DS_ARRAY2D_H

#include "Array.h"

template <class T>
class Array2D{
protected:
    unsigned int numberOfRows;
    unsigned int numberOfColumns;
    Array<T> array;
public:
    //用来描述某一给定二维数组的一个特定行的引用
    class Row{
        Array2D &array2D;
        unsigned int const row;
    public:
        Row(Array2D &_array2D, unsigned int _row) : array2D(_array2D), row(_row){}
        T& operator[] (unsigned int column) const{
            return array2D.Select(row, column);
        }
    };

    Array2D();
    Array2D(unsigned int, unsigned int);
    T& Select(unsigned int, unsigned int);
    Row operator [](unsigned int);
};

#endif //DS_ARRAY2D_H
