#include "util.h"

void print(string msg) {
	cout << msg;
}
string convert(int array[], int size) {
	string s = to_string(array[0]);

	for (int i = 1; i < size; i++)
	{
		s += " " + to_string(array[i]);
	}
	return s;
}
void init(int array[], int size, int a, int b) {
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % (b - a + 1) + a;
	}
}