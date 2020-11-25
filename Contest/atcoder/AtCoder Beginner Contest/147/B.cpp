// Link: https://atcoder.jp/contests/abc147/tasks/abc147_b

#include <iostream>
#include <string>

using namespace std;

int main() {
    // INPUT
    string word;                                        // inputting string
    int count;                                          // counting how many letter that are different
    int len;                                            // length of word

    // INPUT
    cin>>word;

    // PROCESS
    count = 0;
    len = word.length();

    if (len % 2 == 0) {
        for (int i = 0; i <= (len/2)-1; i++) {
            if (word[i] != word[len-i-1]) {
                count++;
            }
        }
    } else {
        for (int i = 0; i <= len/2; i++) {
            if (word[i] != word[len-i-1]) {
                count++;
            }
        }
    }

    // OUTPUT
    cout<<count<<endl;

    return 0;
}