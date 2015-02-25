// Leshchuk Aleksey
// CISP440
// Counting Driver/main

#include <iostream>
#include "Permutation.cpp"
#include "Combination.cpp"

using namespace std;

void combination(int x, int y);
void permutation(int x, int y);

int main() {
    Combination test2(9,3);
    Permutation test(7,7);
    test2.print();
    return 0;
}

