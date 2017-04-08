#include "EvenFibonachi.h"



EvenFibonachi::EvenFibonachi()
{
}


EvenFibonachi::~EvenFibonachi()
{
}

int main() {
	int total = 2; // total sum of the even numbers
	int count = 3;
	int lastNum1 = 2; //the number that came before the current one
	int lastNum2 = 1; //the number that came 2numbers before the current one
	int max = 4000000; // the total the sum can be

	while (count < max) {

		count = lastNum1 + lastNum2;
		std::cout << "Count: ";
		std::cout << count << std::endl;

		if (count % 2 == 0 && count < max) {
			std::cout << "Added" << endl;
			total += count;
		}

		lastNum2 = lastNum1;
		lastNum1 = count;
	}
	std::cout << "Total: ";
	std::cout << total << std::endl;
	return 0;
}