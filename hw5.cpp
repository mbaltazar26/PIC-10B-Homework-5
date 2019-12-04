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
   while (iter.)
   {
       cout << iter.get() << endl;
       iter++
   }
    cout << ")";
    
    return 0;
}
