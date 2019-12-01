#include <string>
using namespace std;

class node {
private:
    string nextHash;
    string prevHash;
public:
    void generateHash();
    string nextNode();
    string preNode();
    
};