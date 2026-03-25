#include <iostream>
using namespace std;

int main() {
    int n = 13;   // binary: 1101
    int i = 2;    // check the 2nd bit (0-indexed from right)

    if (n & (1 << i)) {
        cout << "The " << i << "th bit is set." << endl;
    } else {
        cout << "The " << i << "th bit is not set." << endl;
    }

    return 0;
}
