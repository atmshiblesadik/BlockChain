#pragma once
#include "chain.h"

chain::chain() {
    this->head_node_of_block_chain = NULL;
    this->last_node_of_block_chain = head_node_of_block_chain;
    this->total_size_of_block_chain = 0;
}

void chain::update_this_block_chain() {


    ++this->total_size_of_block_chain;
}

int chain::size_of_block_chain() {
    return this->total_size_of_block_chain;
}

void chain::insert_node_into_this_block_chain() {
    
}

chain::~chain() {

}