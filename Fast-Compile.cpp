#include <iostream>
#include <string>
using namespace std;

int main(int argc,char * argv[]){
    string a;
    a = "g++ ";
    a += argv[1];
    a += " -o ";
    a += argv[1];
    #ifdef _WIN32
    a += ".exe";
    #elif __linux__
    a += ".a";
    #endif
    string b;
    b = a;
    system(b.c_str());
    // cout << a << endl;
    return 0;
}