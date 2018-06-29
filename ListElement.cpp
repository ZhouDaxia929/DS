//
// Created by ZhouDaxia on 2018/6/29.
//

#include "LinkedList.h"

template <class T>
ListElement<T>::ListElement(T const &_datum, ListElement<T> *_next) : datum(_datum), next(_next) {}

template <class T>
T const& ListElement<T>::Datum() const {
    return datum;
}

template <class T>
ListElement<T> const* ListElement<T>::Next() const {
    return next;
}