//
//  List.hpp
//  PIC 10B Homework 5
//
//  Created by Michaella Baltazar on 11/30/19.
//  Copyright © 2019 Michaella Baltazar. All rights reserved.
//

#ifndef List_h
#define List_h

#include "Node.h"
#include "Iterator.h"
#include <stdio.h>
using namespace std;

class Iterator;
class List
{
public:
    List();
    void push_back(int n);
    void push_front(int n);
    void reverse(Iterator iter);
    void insert(Iterator iter, int n);
    Iterator erase(Iterator iter);
    Iterator begin();
    Iterator end();
    void sort(Iterator i1, Iterator i2);
    void merge(List listy);
private:
    Node* first;
    Node* last;
    friend class Iterator;
};

#endif /* List_h */
