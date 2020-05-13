// Link: https://training.ia-toki.org/training/curriculums/1/courses/1/chapters/14/problems/56/

#include <iostream>
#include <string>

using namespace std;

void insertUnderscore(string &text, int index) {
    string a = "_";
    
    text.insert(index, a);
}

int main() {
    // DECLARATION
    string variable;                        // the variable input
    bool snake;                             // to determine if the variable is snake or camel
    int underscore;                         // index of underscore in variable
    int len;                                // length of variable
    int i;                                  // for iteration, as usual
    bool upperCase;                         // index of uppercase character in variable

    // INPUT
    cin>>variable;

    // PROCESS
    snake = true;
    if (variable.find('_') == -1) {
        snake = false;
    }


    if (snake) {
        underscore = variable.find('_');
        while (underscore != -1) {
            variable[underscore+1] -= 32;
            variable.erase(underscore, 1);
            underscore = variable.find('_');
        }
    } else {
        len = variable.length();
        for (i = 0; i < len; i++) {
            upperCase = false;
            if (variable[i] >= 'A' && variable[i] <= 'Z') {
                variable[i] += 32;
                if (i != 0) {
                    insertUnderscore(variable, i);
                }
            }

            len = variable.length();
        }
    }

    // OUTPUT
    cout<<variable<<endl;

    return 0;
}