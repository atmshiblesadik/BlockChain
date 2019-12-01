#ifndef NODE_H
#define NODE_H
#include <string>
using namespace std;

struct nodeData {
private:    
    // bool alreadyInsertData = false;
    string senderID;
    string receiverID;
    string transactionID;
    string transactionType;
    string transactionDate;
    double amount;
public:
    nodeData(string senderID, string receiverID, string transactionID, string transactionType, string transactionData, double amount) {
        this->senderID = senderID;
        this->receiverID = receiverID;
        this->transactionID = transactionID;
        this->transactionType = transactionType;
        this->transactionDate = transactionDate;
        this->amount = amount;
    }
};


class node {
private:
    string nextHash;
    string prevHash;
    string thisHash;
    int thisindex;
    string nextNode();
    string preNode();
    nodeData *thisdata;
public:
    string generateHash();
    node(string senderID, string receiverID, double amount);
};

#endif