//
// Created by ZhouDaxia on 2018/6/29.
//

#include "Matrix.h"
#include <stdexcept>

template <class T>
Matrix<T>::Matrix(unsigned int r, unsigned int c) {
    this->Array2D(r, c);
}

template <class T>
Matrix<T> Matrix<T>::operator * (Matrix<T> const &arg) const {
    if(numberOfColumns != arg.numberOfRows)
        throw std::invalid_argument("incompatible matrices");
    Matrix<T> result(numberOfRows, arg.numberOfColumns);
    for(unsigned int i = 0; i < numberOfRows; ++i){
        for(unsigned int j = 0; j < arg.numberOfColumns; ++j){
            T sum = 0;
            for(unsigned int k = 0; k < numberOfColumns; ++k)
                sum += (*this)[i][k] * arg[k][j];
            result[i][j] = sum;
        }
    }
    return result;
}

template <class T>
Matrix<T> Matrix<T>::operator+(Matrix const &arg) const {
    if(numberOfRows != arg.numberOfRows || numberOfColumns != arg.numberOfColumns)
        throw std::invalid_argument("incompatible matrices");
    Matrix<T> result(numberOfRows, numberOfColumns);
    for(unsigned int i = 0; i < numberOfRows; ++i)
        for(unsigned int j = 0; j < numberOfColumns; ++j)
            result[i][j] = (*this)[i][j] + arg[i][j];
    return result;
}