// Link: https://training.ia-toki.org/training/curriculums/1/courses/1/chapters/14/problems/53/

#include <iostream>
#include <string>

using namespace std;


int main() {
    // DECLARATION
    string text;                                    // the input string
    int K;                                          // the constanta
    int len;                                        // length of text
    int i;                                          // for iteration, as usual

    // INPUT 
    cin>>text;
    cin>>K;

    // PROCESS
    len = text.length();
    for (i = 0; i < len; i++) {
        int ord = (text[i] - 'a');
        int encrypted = (K + ord) % 26;
        text[i] = encrypted + 'a';
    }

    // OUTPUT
    cout<<text<<endl;

    return 0;
}