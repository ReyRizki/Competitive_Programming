// Link: https://training.ia-toki.org/training/curriculums/1/courses/1/chapters/17/problems/69/

#include <iostream>
#include <string>

using namespace std;

// for checking if word is a palindrom or nah
bool palindrom(string check) {
    // DECLARATION
    int len;                            // length of check
    string remains;                     // substring of check

    // PROCESS
    len = check.length();
    remains = check.substr(1, len-2);

    // OUTPUT
    if (len == 1 || (len == 2 && (check[0] == check[1]))) {
        return true;
    } else {
        return (check[0] == check[len-1]) && palindrom(remains);
    }
}

int main() {
    // DECLARATION
    string word;

    // INPUT
    cin>>word;

    //OUTPUT
    if (palindrom(word)) {
        cout<<"YA"<<endl;
    } else {
        cout<<"BUKAN"<<endl;
    }

    return 0;
}