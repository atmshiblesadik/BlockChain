#ifndef SHA256_H
#define SHA256_H
#include <string>
using namespace std;
class SHA256 {
protected:
    string str;
    string generate();

public:
    string sha256(string input);
    string sha256();
};
string sha256(string input);
string sha256();

#endif