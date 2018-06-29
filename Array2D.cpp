//
// Created by ZhouDaxia on 2018/6/29.
//

#include "Array2D.h"
#include <stdexcept>

template <class T>
Array2D<T>::Array2D() : numberOfRows(0), numberOfColumns(0), array(0){}

template <class T>
Array2D<T>::Array2D(unsigned int m, unsigned int n) : numberOfRows(m), numberOfColumns(n), array(m * n){}

template <class T>
T& Array2D<T>::Select(unsigned int i, unsigned int j) {
    if(i >= numberOfRows)
        throw std::out_of_range("invalid row");
    if(j >= numberOfColumns)
        throw std::out_of_range("invalid column");
    return array[i * numberOfColumns + j];
}

template <class T>
Array2D<T>::Row Array2D<T>::operator[](unsigned int row) {
    return Row(*this, row);
}

/*
 * C++中，并不直接支持多维数组下标的重载，为了实现a[i][j]的操作，我们分析a[i][j]的引用过程
 * a.operator[](i).operator[](j)
 * 第一个下标操作符选择第i行，第二个下标操作符选择第i行的第j个元素
 * 上面的两个函数操作符重载，分别实现了上述的两个操作
 */