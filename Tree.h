//
//  Tree.h
//  BinaryTree
//
//  Created by Giovanni Paolo on 5/22/15.
//  Copyright (c) 2015 Giovanni Paolo. All rights reserved.
//

#include "Node.h"

#ifndef BinaryTree_Tree_h
#define BinaryTree_Tree_h

class Tree {
public:
    Node * root;
    Tree();
    void addNode(int number);
    bool numberExists(int number);
    void print();
    ~Tree();
};

#endif