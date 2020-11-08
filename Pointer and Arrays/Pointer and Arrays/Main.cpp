#include <iostream>
using namespace std;

//print_Array function which takes pointers
#include <iostream>

using namespace std;
void printArray(int[], int*);
int main() {
	int a[10] = { 0 };
	int size = 10;
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < 10;i++) {
		cout << *(a + i) << " ";
	}
	cout << "\n";
	printArray(a, &size);
}
void printArray(int *a, int *s) {
	for (int i = 0; i < *s;i++) {
		cout << *(a + i) << " ";
	}
}