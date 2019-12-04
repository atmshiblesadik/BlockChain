#pragma once
#ifndef USER_H
#define USER_H
#include <string>
using namespace std;


class user_profile {
private:
    string private_key;
    string public_key;
    string full_name;
    string email_address;
    string password_hash;
public:
    user_profile(string full_name, string email_address, string password_plain_text);
    void set_private_key(string old_key, string new_key);
    void set_public_key(string old_public_key, string new_public_key, string private_key);
    string get_private_key_hash_value(string public_key);
    
    ~user_profile();
};

#endif