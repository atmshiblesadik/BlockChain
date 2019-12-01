#include "sha256.h"
using namespace std;
string SHA256::sha256(string input) {
    this -> str = input;
    return this->generate();
}
string SHA256::generate() {

}
string sha256(string input) {
    SHA256 sha = SHA256();
    return sha.sha256(input);
}
string sha256() {
    SHA256 sha = SHA256();
    return sha.sha256();
}