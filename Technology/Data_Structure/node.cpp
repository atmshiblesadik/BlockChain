#pragma once
#include "node.h"
#include <cstring>

node::node(string senderID, string receiverID, string transactionType, double amount, string lastHash) {
    string transactionDate = get_current_date_time();
    string transactionID = generate_this_transaction_id(senderID, receiverID, transactionType, transactionDate);
    this->hash_of_this_node = generate_hash_of_this_node(senderID, receiverID, transactionID, transactionType, transactionDate, amount, lastHash);
    this->hash_of_previous_node = lastHash;
    this->hash_of_next_node = "-1";
}

void node::insert_data_into_this_node(string senderID, string receiverID, string transactionID, string transactionType, string transactionDate, double amount) {
    this->data_of_this_node = new data_of_single_node(senderID, receiverID, transactionID, transactionType, transactionDate, amount);
}

void node::set_hash_value_of_next_node(string nextHash) {
    if (this->hash_of_next_node == "-1") {
        this->hash_of_next_node = nextHash;
    }
}

string node::generate_this_transaction_id(string senderID, string receiverID, string transactionType, string transactionDate) {
    SHA1 sha_1_sum;
    return sha_1_sum(senderID + receiverID + transactionType + transactionDate);
}

string node::get_current_date_time() {
    char date_time[25];
    strcpy(date_time, __DATE__);
    strcat(date_time, __TIME__);
    return string(date_time, strlen(date_time));
}

string node::generate_hash_of_this_node(string senderID, string receiverID, string transactionID, string transactionType, string transactionDate, double amount, string lastHash) {
    SHA256 sha_256_sum;
    char buffer[50] = {};
    sprintf(buffer, "%.10f", amount);
    string s_amount = buffer;
    return sha_256_sum(senderID + receiverID + transactionID + transactionType + transactionDate + s_amount + lastHash);
}

string node::get_hash_value_of_this_node() {
    return this->hash_of_this_node;
}

node::~node() {
    delete this->data_of_this_node;
}