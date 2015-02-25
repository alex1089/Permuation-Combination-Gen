// Leshchuk Aleksey
// CISP440
// Counting Driver/main

#include <iostream>
#include "Permutation.cpp"
#include "Combination.cpp"

using namespace std;

void combination();
void permutation();

int main() {
    int choice;
    do {
	cout<<"Select 1 for Combination\nSelect 2 for Permutation\n\n: ";
	cin>>choice;
    } while (choice<1 && choice>2 );

    void (*process[2])() = {combination,permutation};

    process[choice]();
    return 0;
}

void combination(){
    int x,y;
    do {
	cout<<"Enter the range of numbers to choose from (1-9): ";
	cin>>x;
	cout<<"Enter how many to numbers to select (1-9) < choose: ";
	cin>>y;
    } while ( (x>9 || x<1 ) || (y>9 || y<1)|| (y>x));

    Combination comb(x,y);
    comb.print();
}
void permutation(){
    int x,y;
    do {
	cout<<"Enter the range of numbers to choose from (1-9): ";
	cin>>x;
	cout<<"Enter how many to numbers to select (1-9) < choose: ";
	cin>>y;
    } while ( (x>9 || x<1 ) || (y>9 || y<1)|| (y>x));

    Permutation perm(x,y);
    perm.print();
}
