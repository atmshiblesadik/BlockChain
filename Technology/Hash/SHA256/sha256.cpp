#include "sha256.h"

string SHA256::sha256(string input) {
    this -> str = input;
    return this->generate();
}
string SHA256::generate() {
    if (operating_system == "win32" || operating_system == "win64") {

    }
    else if (operating_system == "linux") {
        
    }
    else if (operating_system == "apple") {

    }
    else if (operating_system == "unix") {

    }
    else {

    }
}
string sha256(string input) {
    SHA256 sha = SHA256();
    return sha.sha256(input);
}
string sha256() {
    SHA256 sha = SHA256();
    return sha.sha256();
}