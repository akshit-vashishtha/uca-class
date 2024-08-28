#include <bits/stdc++.h>
using namespace std;

long long toh(int n, int from, int to, int aux) {
    if (n == 1) {
        cout << "move disk " << n << " from rod " << from << " to rod " << to << endl;
        return 1;
    }
    // Move n-1 disks from source to aux via dest
    long long a = toh(n-1, from, aux, to);
    // Move nth disk from source to dest
    cout << "move disk " << n << " from rod " << from << " to rod " << to << endl;
    // Move n-1 disks from aux to dest
    long long b = toh(n-1, aux, to, from);
    
    return a + b + 1;  // Add 1 for the current move
}

int main() {
    int N;
    cin >> N;
    cout << toh(N, 1, 3, 2) << endl;
    return 0;
}

