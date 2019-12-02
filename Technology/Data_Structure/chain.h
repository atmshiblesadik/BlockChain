#ifndef CHAIN_H
#define CHAIN_H
#pragma once
#include <string>
#include "node.h"
using namespace std;

class chain { /// Singletone class

private:
    static chain *instance;
    chain *headNode;
    chain *lastNode;
    int total_size;
    chain();
    void updateChain();

public:
    static chain *createBlockChain() {
        if(!instance) {
            instance = new chain();
        }
        return instance;
    }
    void insertNode();
    int size();
    ~chain();
};



#endif