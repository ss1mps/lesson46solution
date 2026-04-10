#include "util.h"
#include "logic.h"

int main() {

	int array[DEFAULT_SIZE];

	int size;

	cout << "Input size of array: ";
	cin >> size;

	init(array, size, 0, 100);

	print("Array: ");
	print(convert(array, size));

	int max = get_max(array, size);
	int min = get_min(array, size);

	print("\nMax value is " + to_string(max) + ".");
	print("\nMin value is " + to_string(min) + ".");

	double avg = get_avg(array, size);
	double gvg = get_gvg(array, size);

	print("\nArithmetical mean is " + to_string(avg) + ".");
	print("\nGeometrical mean is " + to_string(gvg) + ".");

	swap_extreme_elements(array, size);

	print("\nAfter array: ");
	print(convert(array, size));

	return 0;
}