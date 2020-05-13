#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;
string number1, number2;
string hasil;

char toChar(int x) {
    return x + '0';
}

int toInt(char x) {
    return x - '0';
}

void insertNumber(string &text, string number) {
    text.insert(0, number);
}

void tambah() {
    int len1, len2;
    int maksimal, minimal;
    // string hasil;
    int leuwih;

    cin>>number1;
    cin>>number2;

    len1 = number1.length();
    len2 = number2.length();
    
    if (len1 > len2) {
        for (int i = 0; i < (len1 - len2); i++) {
            number2.insert(0, "0");
        }
    } else if (len2 > len1) {
        for (int i = 0; i < (len2 - len1); i++) {
            number1.insert(0, "0");
        }
    }
    // cout<<number1<<endl<<number2<<endl;

    leuwih = 0;
    for (int i = max(len1, len2) - 1; i >= 0; i--) {
        int temp;

        temp = toInt(number1[i]) + toInt(number2[i]) + leuwih;

        if (temp >= 10) {
            leuwih = temp / 10;
        } else {
            leuwih = 0;
        }
        
        if (i == 0) {
            insertNumber(hasil, to_string(temp));
        } else {
            insertNumber(hasil, to_string(temp % 10));
        }
    }
}


int main()
{
    unsigned long long int N;
    string arr[100001];
    int i;
    string result[100001];
    string max;

    scanf("%llu", &N);

    max = "0";
    for (i = 0; i < N; i++)
    {
        cin>>arr[i];
        if (strcmp(arr[i], max) > 0)
        {
            max = arr[i];
        }
    }

    for (i = 1; i <= max; i++)
    {
        if ((i == 1) || (i == 2))
        {
            result[i] = "1";
        }
        else
        {
            result[i] = hasil;
        }
    }

    for (i = 0; i < N; i++)
    {
        printf("%s\n", result[arr[i]]);
        // printf("%llu\n", result[arr[i]-1] % 1000000007);
    }

    return 0;
}