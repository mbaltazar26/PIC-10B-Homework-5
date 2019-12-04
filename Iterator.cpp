//
//  Iterator.cpp
//  PIC 10B Homework 5
//
//  Created by Michaella Baltazar on 11/30/19.
//  Copyright © 2019 Michaella Baltazar. All rights reserved.
//

#include "Iterator.h"
#include <cassert>

Iterator::Iterator()
{
    
}

int Iterator::get() const
{
    assert(position != NULL);
    return position->num;
}

void Iterator::next()
{
    assert(position != NULL);
    position = position->next;
}

void Iterator::previous()
{
    assert(position != container->first);
    if (position == NULL)
        position = container->last;
    else
        position = position->previous;
}

bool Iterator::equals(Iterator b) const
{
    return position == b.position;
}
