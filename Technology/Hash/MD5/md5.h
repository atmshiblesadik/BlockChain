#ifndef MD5_H
#define MD5_H
#include <string>
using namespace std;
class MD5 {
protected:
    string str;
    string generate();

public:
    string md5(string input);
    string md5();
};
string md5(string input);
string md5();

#endif