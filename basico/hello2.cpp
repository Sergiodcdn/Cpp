#include <iostream>

// #if defined(_WIN32)
//  define PAUSE "pause"
// #elif defined(unix) || defined(__unix__) || defined(__unix)
//  define PAUSE "read -p 'Press Enter to continue...' var"

using namespace std;

int main() {

    // std::cout << "Hello World!\nCanal Pinchers" << std::endl;

    cout << "Hello World!\nCanal Pinchers\n";

    system("read -p 'Press Enter to continue...' var");

    return 0;
}