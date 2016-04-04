//
//  main.cpp
//  BinaryTree
//
//  Created by Giovanni Paolo on 5/22/15.
//  Copyright (c) 2015 Giovanni Paolo. All rights reserved.
//

#include <iostream>
#include "Tree.h"

using namespace std;

int main(int argc, const char * argv[]) {
    Tree t;
    t.addNode(10);
    t.addNode(25);
    t.addNode(2);
    t.addNode(4);
    t.addNode(12);
    
//    cout << t.numberExists(2) << endl; //1
//    cout << t.numberExists(5) << endl; //0
//    cout << t.numberExists(10) << endl; //1
//    cout << t.numberExists(12) << endl; //1
//    cout << t.numberExists(25) << endl; //1
//    cout << t.numberExists(30) << endl; //0
    
    t.print();
}
