//
//  Node.h
//  BinaryTree
//
//  Created by Giovanni Paolo on 5/22/15.
//  Copyright (c) 2015 Giovanni Paolo. All rights reserved.
//

#ifndef BinaryTree_Node_h
#define BinaryTree_Node_h

struct Node {
    Node * leftChild = nullptr;
    Node * rightChild = nullptr;
    int value;
};

#endif
