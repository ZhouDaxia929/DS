//
// Created by ZhouDaxia on 2018/6/29.
//
#include "Array2D.h"

#ifndef DS_MATRIX_H
#define DS_MATRIX_H

template <class T>
class Matrix : public Array2D<T>{
public:
    Matrix(unsigned int, unsigned int);
    Matrix operator * (Matrix const &) const;
    Matrix operator + (Matrix const &) const;
};

#endif //DS_MATRIX_H
