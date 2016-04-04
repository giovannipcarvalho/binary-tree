//
//  Tree.cpp
//  BinaryTree
//
//  Created by Giovanni Paolo on 5/22/15.
//  Copyright (c) 2015 Giovanni Paolo. All rights reserved.
//

#include "Tree.h"
#include <iostream>

Tree::Tree(){
    root = nullptr;
    std::cout << "initializing tree" << std::endl;
}

void addnumber(int number, Node ** node){
    if (*node != nullptr) {
        addnumber(number, number <= (*node)->value ? &((*node)->leftChild) : &((*node)->rightChild));
    } else {
        *node = new Node;
        (*node)->value = number;
    }
}

bool findnumber(int number, Node * node){
    if (node != nullptr){
        if (node->value == number) {
            return true;
        } else {
            return findnumber(number, number <= node->value ? node->leftChild : node->rightChild);
        }
        return false;
    }
    return false;
}

void Tree::addNode(int number){
    addnumber(number, &root);
}

bool Tree::numberExists(int number){
    return findnumber(number, root);
}
void printtree(Node * node){
    if(node != nullptr){
        std::cout << node->value << std::endl;
        printtree(node->leftChild);
        printtree(node->rightChild);
    }
}
void Tree::print(){
    printtree(root);
}

void cleanup(Node * node){
    if (node != nullptr) {
        cleanup(node->leftChild);
        cleanup(node->rightChild);
        delete node;
    }
}

Tree::~Tree(){
    //cleanup tree
    cleanup(root);
}