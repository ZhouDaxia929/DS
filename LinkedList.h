//
// Created by ZhouDaxia on 2018/6/29.
//

#ifndef DS_LINKEDLIST_H
#define DS_LINKEDLIST_H

template <class T>
class LinkedList;

template <class T>
class ListElement{
    T datum;
    ListElement *next;

    ListElement (T const&, ListElement*);

public:
    T const& Datum() const;
    ListElement const* Next() const;

    friend class LinkedList<T>;
};

template <class T>
class LinkedList{
    ListElement<T>* head;
    ListElement<T>* tail;
public:
    LinkedList();
    ~LinkedList();

    LinkedList(LinkedList const&);
    LinkedList& operator = (LinkedList const&);

    ListElement<T> const* Head() const;
    ListElement<T> const* Tail() const;
    bool IsEmpty() const;
    T const& First() const;
    T const& Last() const;

    void Prepend(T const&);
    void Append(T const&);
    void Extract(T const&);
    void Purge();
    void InsertAfter(ListElement<T> const*, T const&);
    void InsertBefore(ListElement<T> const*, T const&);
};

#endif //DS_LINKEDLIST_H
