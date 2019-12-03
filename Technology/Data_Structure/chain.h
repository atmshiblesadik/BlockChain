#ifndef CHAIN_H
#define CHAIN_H
#pragma once
#include <string>
#include "node.h"
using namespace std;

class chain { /// Singletone class
private:
    static chain *instance_of_this_block_chain;
    node *head_node_of_block_chain;
    node *last_node_of_block_chain;
    int total_size_of_block_chain;
    chain();
    void update_this_block_chain();

public:
    static chain *create_block_chain() {
        if(!instance_of_this_block_chain) {
            instance_of_this_block_chain = new chain();
            return instance_of_this_block_chain;
        }
        else {
            return NULL;
        }
    }
    void insert_node_into_this_block_chain();
    void update_this_block_chain();
    int size_of_block_chain();
    ~chain();
};



#endif