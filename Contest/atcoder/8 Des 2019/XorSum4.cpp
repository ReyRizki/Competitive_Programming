// Link: https://atcoder.jp/contests/abc147/tasks/abc147_d

#include <iostream>

using namespace std;

int main() {
    // DECLARATION
    unsigned long long int A[300000];
    unsigned long long int N;
    unsigned long long int sum;

    // INPUT
    cin>>N;
    for (unsigned long long int i = 0; i < N; i++) {
        cin>>A[i];
    }

    // PROCESS
    sum = 0;
    for (unsigned long long int i = 0; i < N-1; i++) {
        for (unsigned long long int j = i+1; j < N; j++) {
            sum += A[i] ^ A[j];
        }
    }

    sum = sum % (1000000000 + 7);

    cout<<sum<<endl;
    
    return 0;
}