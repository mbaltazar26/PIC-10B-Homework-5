//
//  Node.hpp
//  PIC 10B Homework 5
//
//  Created by Michaella Baltazar on 11/30/19.
//  Copyright © 2019 Michaella Baltazar. All rights reserved.
//

#ifndef Node_h
#define Node_h

#include <stdio.h>
using namespace std;

class Node
{
public:
    Node(int n);
private:
    int num;
    Node* previous;
    Node* next;
    friend class List;
    friend class Iterator;
};

#endif /* Node_h */
