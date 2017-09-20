#include <iostream>

using namespace std;

class CanGoWrong {
public:
    CanGoWrong() {
        char *pMem = new char[999999999999999*2];
        delete[] pMem;
    }
};

int main() {
    try {
        CanGoWrong wrong;
    } catch (exception &error) {
        cout << error.what() << endl;
    }
    return EXIT_SUCCESS;
}