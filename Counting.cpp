// Counting Class
// Aleksey Leshchuk
// CISP440

#include <iostream>

class Counting {
    public:
	// constructor
	Counting(int total, int choose):
	    total_num(total),
	    choose_num(choose) {};
	// virtual print method
	virtual ostream& print() const = 0;
	// recursive factorial 
	int factorial (int x) {
	    if (x == 1) // 1!
		return 1;
	    return x*factorial(x-1);
	}

    private:
	int total_num;
	int choose_num;
	int sets;
};


