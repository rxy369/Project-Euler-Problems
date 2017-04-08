#include <iostream>

int main() {

	int total = 0;
	int count;
	int min = 3;
	int max = 1000;

	for (count = min; count < max; count++) {
		if ((count % 3 == 0) || (count % 5 == 0)) {
			total += count;
		}
	}

	std::cout <<  "Total is: " << total << std::endl;
	//why did std::cout << "Total is: " + total << std::endl; not work? It through a read access error I beleive
	return 0;
}