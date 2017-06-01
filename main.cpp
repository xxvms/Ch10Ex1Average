/*
 * program that reads user numbers as double and works out average
 */

#include <iostream>

double avereageValue(double* pDouble, int choice_);


int main() {
	
	
	int choice = 0;
	std::cout << "Provide size of array: ";
	std::cin >> choice;                                     // size of the array
	
	double* pointerLength = NULL;                           // null pointer
	pointerLength = new double(choice);                     // dynamically created array
	
	for (int i = 0; i < choice ; i++) {                     // loop to collect data
		
		std::cout << "Please provide number: ";
		std::cin >> pointerLength[i];
	}
	std::cout << avereageValue(pointerLength, choice) << std::endl;
	
	system("pause");
	return 0;
}
double avereageValue(double pDouble[], int choice_) {
	double tmpValue = 0;                                    // temp variable to store values for average
	
	for (int j = 0; j < choice_; ++j) {                      // creating average of all points
		
		tmpValue += pDouble[j];
		double* pTmp = &tmpValue;
	}
	
	return tmpValue/choice_;
}
