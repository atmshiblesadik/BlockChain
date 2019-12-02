#ifndef NODE_H
#define NODE_H
#pragma once
#include <string>
#include "../Hash/sha256.h"
using namespace std;

struct data_of_single_node {
private:    
    // bool alreadyInsertData = false;
    string senderID;
    string receiverID;
    string transactionID;
    string transactionType;
    string transactionDate;
    double amount;
public:
    data_of_single_node(string senderID, string receiverID, string transactionID, string transactionType, string transactionDate, double amount) {
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
    string hash_of_next_node;
    string hash_of_previous_node;
    string hash_of_this_node;
    int index_of_this_node;
    data_of_single_node *data_of_this_node;
    void insert_data_into_this_node(string senderID, string receiverID, string transactionID, string transactionType, double amount);
    string generate_hash_of_this_node(string senderID, string receiverID, string transactionID, string transactionType, string transactionDate, double amount, string lastHash);
    string get_current_date_time();
    string generate_this_transaction_id(string senderID, string receiverID, string transactionType, string transactionDate);
public:
    node(string senderID, string receiverID, string transactionType, double amount, string lastHash);
    void set_hash_value_of_next_node(string nextHash);
};

#endif