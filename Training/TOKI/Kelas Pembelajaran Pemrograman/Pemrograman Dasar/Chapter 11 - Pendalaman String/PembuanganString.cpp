// Link: https://training.ia-toki.org/training/curriculums/1/courses/1/chapters/14/problems/52/

#include <iostream>
#include <string>

using namespace std;

int main() {
    // DECLARATION
    string text;                                // the text that used as input 
    string trash;                               // the substring that will be deleted from text
    int exist;                                  // checking if trash is exist in text

    // INPUT
    cin>>text;
    cin>>trash;

    // PROCESS
    exist = text.find(trash);
    while (exist != -1) {
        text.erase(exist, trash.length());
        exist = text.find(trash);
    }

    // OUTPUT
    cout<<text<<endl;

    return 0;
}