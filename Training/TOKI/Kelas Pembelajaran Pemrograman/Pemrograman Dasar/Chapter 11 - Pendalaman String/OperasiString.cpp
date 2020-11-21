// Link: https://training.ia-toki.org/training/curriculums/1/courses/1/chapters/14/problems/54/

#include <iostream>
#include <string>

using namespace std;

int main() {
    // DECLARATION
    string s1, s2, s3, s4;                                  // string input 

    // INPUT
    cin>>s1>>s2>>s3>>s4;

    // PROCESS
    s1.erase(s1.find(s2), s2.length());
    s1.insert(s1.find(s3) + s3.length(), s4);

    // OUTPUT
    cout<<s1<<endl;

    return 0;
}