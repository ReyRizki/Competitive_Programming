// Link: https://codeforces.com/contest/1272/problem/A

#include <iostream>

using namespace std;

int abs(int x) {
    if (x >= 0) {
        return x;
    } else if (x < 0) {
        return -x;
    }
}

int main() {
    // DECLARATION
    int q;
    int friends[3];
    int distance[1000];
    bool done;

    // INPUT AND PROCESS
    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        scanf("%d %d %d", &friends[0], &friends[1], &friends[2]);
        for (int j = 0; j < 3; j++) {
            for (int k = 2; k > i; k--) {
                if (friends[k] < friends[k-1]) {
                    friends[k] = friends[k] + friends[k-1];
                    friends[k-1] = friends[k] - friends[k-1];
                    friends[k] = friends[k] - friends[k-1];
                }
            }
        }

        //printf("%d %d %d", friends[0], friends[1], friends[2]);
        
        done = false;
        if (friends[0] < friends[1]) {
            friends[0]++;
            if ((friends[0] < friends[1]) && (friends[1] == friends[2])) {
                friends[1]--;
                friends[2]--;
            }
            done = true;
        }

        if ((friends[1] < friends[2])) {
            friends[2]--;
            if ((friends[0] == friends[1]) && (friends[1] < friends[2])) {
                friends[0]++;
                friends[1]++;
            }
        }
        
        // printf("%d %d %d", friends[0], friends[1], friends[2]);

        
        distance[i] = abs(friends[0] - friends[1]) + abs(friends[1] - friends[2]) + abs(friends[0] - friends[2]); 
        
        // printf("%d", distance[i]);
    }

    // OUTPUT
    for (int i = 0; i < q; i++) {
        printf("%d\n", distance[i]);
    }

    return 0;
}