#include "chain.h"

chain::chain() {
    this->headNode = NULL;
    this->lastNode = headNode;
    this->total_size = 0;
}
