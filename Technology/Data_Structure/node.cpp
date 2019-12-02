#pragma once
#include "node.h"
#include <cstring>

node::node(string senderID, string receiverID, string transactionType, double amount, string lastHash) {
    string transactionDate = get_current_date_time();
    string transactionID = generate_this_transaction_id(senderID, receiverID, transactionType, transactionDate);
    this->hash_of_this_node = generate_hash_of_this_node(senderID, receiverID, transactionID, transactionType, transactionDate, amount, lastHash);
    this->hash_of_next_node = lastHash;
    this->hash_of_next_node = "-1";
}

void node::insert_data_into_this_node(string senderID, string receiverID, string transactionID, string transactionType, double amount) {

}

void node::set_hash_value_of_next_node(string nextHash) {

}

string node::get_current_date_time() {
    char date_time[25];
    strcpy(date_time, __DATE__);
    strcat(date_time, __TIME__);
    return string(date_time, strlen(date_time));
}

string node::generate_hash_of_this_node(string senderID, string receiverID, string transactionID, string transactionType, string transactionDate, double amount, string lastHash) {
    SHA256 sha_256_sum;
    string this_node_hash = "";


    return this_node_hash;
}
