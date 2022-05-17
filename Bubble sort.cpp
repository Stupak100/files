///include necessary libraries and std
#include<iostream>
using namespace std;

//define array and other necessary variables
const int N = 10;
float tab[N];
int  i;
bool sorted = false;

//main code
int main() {
	//input into array
        cout<<"Input 10 numbers\n"
	for (i = 0; i < N; i++) {
		cin >> tab[i];
	}

	//sorting algorithm
	while (sorted == false) {
		sorted = true;
		for (i = 0; i < N; i++) {
			if (tab[i - 1] > tab[i]) {
				sorted = false;
				swap(tab[i - 1], tab[i]);
			}
		}
	}

	//output from array
	for (int i = 0; i < N; i++) {
		cout << tab[i] << ", ";
	}
	return 0;
}
