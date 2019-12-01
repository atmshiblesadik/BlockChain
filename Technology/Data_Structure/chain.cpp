#include "chain.h"

chain::chain() {
    this->headNode = NULL;
    this->lastNode = headNode;
    this->total_size = 0;
}

void chain::insertNode() {

}

void chain::updateChain() {
    ++this->total_size;

}

int chain::size() {
    return this->total_size;
}

