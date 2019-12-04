//
//  hw5.cpp
//  PIC 10B Homework 5
//
//  Created by Michaella Baltazar on 11/30/19.
//  Copyright © 2019 Michaella Baltazar. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <string>
#include "List.h"
#include "Node.h"
#include "Iterator.h"

int main()
{
    List listy;
    int num;
    cout << "Please input a set of nonnegative numbers for a list." << endl;
    cout << "(Enter -1 when you are finished): " << endl;
    cin >> num;
    if (!cin)
    {
        cout << "That is not a number >:(" << endl;
        return 0;
    }
    while (num > 0)
    {
        listy.push_back(num);
        cout << "Next input: ";
        cin >> num;
    }
    Iterator iter = listy.begin();
    cout << iter.get();
    cout << "Your list is: " << endl;
    cout << "(";
   while (iter != listy.end())
   {
       cout << iter.get() << ", " << endl;
       iter.next();
   }
    cout << iter.get() << endl;
    cout << ")";
    
    //insert
    iter = listy.begin();
    int index;
    int value;
    cout << "Please give an index to insert: ";
    cin >> index;
    cout << endl;
    cout << "Please give a value to insert: " ;
    cin >> value;
    for (int i = 0; i < index; i++)
    {
        iter.next();
    }
    listy.insert(iter, value);
    iter = listy.begin();
    cout << "The augmented list is: " << endl;
    cout << "(";
    while (iter != listy.end())
    {
        cout << iter.get() << ", " << endl;
        iter.next();
    }
    cout << iter.get() << endl;
    cout << ")" << endl;
    
    // sort
    iter = listy.begin();
    Iterator iter2 = iter;
    iter2.next();
    listy.sort(iter, iter2);
    cout << "The sorted list is: ";
    cout << "(";
    while (iter != listy.end())
    {
        cout << iter.get() << ", " << endl;
        iter.next();
    }
    cout << iter.get() << endl;
    cout << ")";
    
    //reverse
    iter = listy.begin();
    listy.reverse(iter);
    iter = listy.begin();
    cout << "The reversed list is: " << endl;
    cout << "(";
    while (iter != listy.end())
    {
        cout << iter.get() << ", " << endl;
        iter.next();
    }
    cout << iter.get() << endl;
    cout << ")";
    
    //new list
    List l2;
    l2.push_back(2);
    l2.push_back(3);
    l2.push_back(5);
    l2.push_back(7);
    l2.push_back(11);
    listy.merge(l2);
    iter = listy.begin();
    cout << "Here is another list: (2, 3, 5, 7, 11)" << endl;
    cout << "The merged list is: " << endl;
    cout << "(";
    while (iter != listy.end())
    {
        cout << iter.get() << ", " << endl;
        iter.next();
    }
    cout << iter.get() << endl;
    cout << ")";
    
    return 0;
}
