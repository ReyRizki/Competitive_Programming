// Link: https://atcoder.jp/contests/abc147/tasks/abc147_a

#include <iostream>

using namespace std;

int main() {
    // DECLARATION
    int a1, a2, a3;

    // INPUT
    cin>>a1>>a2>>a3;

    if (a1 + a2 + a3 >= 22) {
        cout<<"bust"<<endl;
    } else {
        cout<<"win"<<endl;
    }

    return 0;
}