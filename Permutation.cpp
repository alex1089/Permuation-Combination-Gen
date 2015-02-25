// Permutation class 
// Aleksey Leshchuk
// CISP440

#include <iostream>
#include "Counting.cpp"

class Permutation: private Counting {
    public:
	Permutation (int total, int choose):
	    Counting(total, choose)
    {
	sets = factorial(total)/factorial(total-choose);
    }
	void print() const {

	    int one_nine[9] = {1,2,3,4,5,6,7,8,9};
	    int break_counter=1;
	    int length = choose_num;
	    int range= total_num;
	    bool fail=false;
	    int working_ind=length-1;
	    int last_position=working_ind-1;	// tracker of index last incremented
	    // print first permutation
	    for (int i=0;i<length;i++)
		std::cout<<one_nine[i];
	    std::cout<<" ";
	    int lim=sets;
	    for (int i=0;i<lim-1;i++){	// TODO: fix limit o sets
		do {
		    int doubles[9]={0};	// stats tracker for multiple occurences of a digit
		    one_nine[working_ind]++;
		    fail=false;
		    do {
			if (one_nine[working_ind]>range){ // overflow
			    one_nine[working_ind]=1;    // set
			    one_nine[working_ind-1]++;
			}
			if (last_position>working_ind-1 && working_ind>0){
			    std::cout<<last_position;
			    last_position=working_ind-1;
			}
			working_ind--;
		    } while (one_nine[working_ind]>range);
		    working_ind=length-1;

			
		
		    
		    for (int exist=0; exist<length;exist++){	    //test for elementN == elementX
			doubles[one_nine[exist]]++;
		    }
		    for (int test_doubles:doubles){
			if (test_doubles >1)
			    fail=true;
		    }
		    
	    
		} while (fail);
		working_ind=length-1;	// reset working index to last position

		for (int ii=0;ii<length;ii++)
		       std::cout<<one_nine[ii];
		std::cout<<" ";
	        break_counter++;
		if (!(break_counter%7))
		    std::cout<<std::endl;
	    }
	    std::cout<<std::endl;
	    std::cout<<"There are "<<sets<<" permutations.\n";
	}
};
