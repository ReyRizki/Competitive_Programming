// Link: https://training.ia-toki.org/training/curriculums/1/courses/1/chapters/17/problems/70/

#include <iostream>
#include <string>

using namespace std;

// to convert decimal to binary
string binary(int N) {
    if (N == 1) {
        return "1";
    } else if (N % 2 == 1) {
        return binary(N/2) + "1";
    } else {
        return binary(N/2) + "0";
    }
}

int main() {
    // DECLARATION
    int decimal;                                        // input variable

    // INPUT 
    cin>>decimal;

    // OUTPUT
    cout<<binary(decimal)<<endl;

    return 0;
}