// Link: https://training.ia-toki.org/training/curriculums/1/courses/11/chapters/51/problems/228/

#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (a == 0) {
        return b;
    } else {
        return gcd(b % a, a);
    }
}

int lcm(int number1, int number2) {
    return ((number1 * number2) / gcd(number1, number2));
}

int main() {
    // DECLARATION
    int N;                                              // the inputs
    int seller[20];                                     // frequency of a seller
    int market;                                         // the day

    // INPUT 
    cin>>N;
    for (int i = 0; i < N; i++) {
        cin>>seller[i];
    }

    // PROCESS
    market = lcm(seller[0], seller[1]);

    for (int i = 2; i < N; i++) {
        market = lcm(market, seller[i]);
    }

    // OUTPUT
    cout<<market<<endl;

    return 0;
}