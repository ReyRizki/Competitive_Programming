// Link: https://training.ia-toki.org/training/curriculums/1/courses/1/chapters/14/problems/55/

#include <iostream>

using namespace std;

int main() {
    // DECLARATION
    string text;                                // for input
    int len;                                    // length of text
    int i;                                      // for iteration, as usual

    // INPUT 
    cin>>text;

    // PROCESS
    len = text.length();
    for (i = 0; i < len; i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] += 32;
        } else if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] -= 32;
        }
    }

    // OUTPUT
    cout<<text<<endl;
}