// Link: https://training.ia-toki.org/training/curriculums/1/courses/1/chapters/18/problems/74/

#include <iostream>

using namespace std;

int N, K;
int catat[9];
void tulis(int kedalaman) {
    if (kedalaman >= K) {
        for (int i = 0; i < K; i++) {
            cout<<catat[i];
            if (i < K-1) {
                cout<<" ";
            } else if (i == K-1) {
                cout<<endl;
            }
            
        } 
    } else {
        for (int i = catat[kedalaman - 1] + 1; i <= N; i++) {
            catat[kedalaman] = i;
            tulis(kedalaman + 1);
        }
    }
}

int main() {
    cin>>N;
    cin>>K;

    tulis(0);
}