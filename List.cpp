//
//  List.cpp
//  PIC 10B Homework 5
//
//  Created by Michaella Baltazar on 11/30/19.
//  Copyright © 2019 Michaella Baltazar. All rights reserved.
//

#include "List.h"
#include <cassert>
using namespace std;

List::List()
{
    
}

void List::push_back(int n)
{
    Node* new_node = new Node(n);
    if (last == NULL)
    {
        first = new_node;
        last = new_node;
    }
    else
    {
        new_node->previous = last;
        last->next = new_node;
        last = new_node;
    }
}

void List::push_front(int n)
{
    Node* new_node = new Node(n);
    if (first == NULL)                  // empty linked list
    {
        first = new_node;
        last = new_node;
    }
    else
    {
        new_node->next = first;
        first->previous = new_node;
        first = new_node;
    }
}

void List::reverse(Iterator iter)
{
    while (iter.position != NULL)
    {
        Node* temp = iter.position;
        iter.position->next = iter.position->previous;
        iter.position->previous = temp->next;
        iter.position = iter.position->next;
    }
    Node* temp = first;
    first = last;
    last = temp;
}

void List::insert(Iterator iter, int n)
{
    if (iter.position == NULL)
    {
        push_back(n);
        return;
    }
    Node* after = iter.position;
    Node* before = after->previous;
    Node* new_node = new Node(n); new_node->previous = before;
    new_node->next = after;
    after->previous = new_node;
    if (before == NULL) // Insert at beginning
        first = new_node;
    else
        before->next = new_node;
}

Iterator List::erase(Iterator iter)
{
    assert(iter.position != NULL);
    Node* remove = iter.position;
    Node* before = remove->previous;
    Node* after = remove->next;
    if (remove == first)
        first = after;
    else
        before->next = after;
    if (remove == last)
        last = before;
    else
        after->previous = before;
    delete remove;
    Iterator r;
    r.position = after;
    r.container = this;
    return r;
}

Iterator List::begin()
{
    Iterator iter;
    iter.position = first;
    iter.container = this;
    return iter;
}

Iterator List::end()
{
    Iterator iter;
    iter.position = NULL;
    iter.container = this;
    return iter;
}

void List::sort(Iterator i1, Iterator i2)
{
    while (i1.position!= NULL)
    {
        while (i2.position->next!=NULL)
        {
            if (i1.position->num > i2.position->num)
            {
                insert(i1, i2.position->num);
                erase(i2);
            }
            i2.next();
        }
        i1.next();
    }
}

void List::merge(List listy)
{
    
}
