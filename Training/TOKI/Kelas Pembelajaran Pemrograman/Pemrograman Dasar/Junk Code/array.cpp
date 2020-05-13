#include <iostream>

using namespace std;

int main() {
    int number[2 * 2];
    int i;

    for (i = 0; i < 4; i++) {
        number[i] = i;
    }

    for (i = 0; i < 4; i++) {
        cout<<number[i]<<endl;
    }

    return 0;
}