// Link: https://training.ia-toki.org/training/curriculums/1/courses/1/chapters/13/problems/48/

#include <iostream>

using namespace std;

// for checking a number is prime or nah
bool primeCheck(int numbCheck) {
    // DECLARATION
    int divisor;                // to store number for checking
    bool primeNumb = true;      // to break the while loop

    // PROCESS
    divisor = 2;
    while (primeNumb && (divisor < numbCheck)) {
        if (numbCheck % divisor == 0) {
            primeNumb = false;
        } else {
            primeNumb = true;
            divisor++;
        }
    }

    return primeNumb;
}

// Used to change the value of prime in the main function
void primeChanger(int& teuing) {
    // DECLARATION
    bool isPrime = false;        // for checking if the teuing variable is prime
    
    // PROCESS
    teuing++;
    
}

int main() {
    // DECLARATION
    int number;                 // for input
    int prime = 2;              // to check the number  
    int i;                      // for iteration, as usual
    int factor[20];
    int power[20];
    int factorization;

    // INPUT 
    cin>>number;

    // PROCESS
    for (i = 0; i < 20; i++) {
        power[i] = 0;
    }

    factorization = 0;
    while (number > 1 && prime <= number) {
        if (number % prime == 0) {
            factorization++;
        }

        while (number % prime == 0) {
            factor[factorization-1] = prime;
            power[factorization-1]++;
            number /= prime;
        }
        
        primeChanger(prime);
    }

    // OUTPUT
    for (i = 0; i < factorization; i++) {
        cout<<factor[i];
        if (power[i] > 1) {
            cout<<"^"<<power[i];
        }

        if (i < factorization-1) {
            cout<<" x ";
        }
    }
    cout<<"\n";

    return 0;
}