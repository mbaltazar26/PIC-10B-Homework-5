//
//  Iterator.hpp
//  PIC 10B Homework 5
//
//  Created by Michaella Baltazar on 11/30/19.
//  Copyright © 2019 Michaella Baltazar. All rights reserved.
//

#ifndef Iterator_h
#define Iterator_h

#include "Node.h"
#include "List.h"
#include <stdio.h>
using namespace std;

class List;
class Iterator
{
public:
    Iterator();
    int get() const;
    void next();
    void previous();
    bool equals(Iterator b) const;
private:
    Node* position;
    List* container;
    friend class List;
};

#endif /* Iterator_h */
