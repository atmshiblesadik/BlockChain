#include "md5.h"
#include <windows.h>

string MD5::md5(string input) {
    this -> str = input;
    return this->generate();
}
string MD5::generate() {

}
string md5(string input) {
    MD5 md = MD5();
    return md.md5(input);
}
string md5() {
    MD5 md = MD5();
    return md.md5();
}