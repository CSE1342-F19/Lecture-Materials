#include <iostream>

double computeAverage(double val1, double val2) {
	double average = (val1 + val2) / 2.0;

	return average;
}

int main() {
	double val1 = 100;
	double val2 = 200;

  double average = computeAverage(val1, val2);

	std::cout << "Average: " << average << std::endl;

	return 0;
}