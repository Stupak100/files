//include necessary libraries and std
#include<iostream>
using namespace std;

//define array and other necessary variables
const int N = 10;
int tab[N];
int  i;
bool sorted = false;

//main code
int main() {
	//input into array
	for (int i = 0; i < N; i++) {
		cin >> tab[i];
	}

	//sorting algorithm
	while (sorted == false) {
		sorted = true;
		for (i = 0; i < N; i++) {
			if (tab[i] > tab[i + 1]) {
				sorted = false;
				swap(tab[i], tab[i + 1]);
			}
		}
	}

	//output from array
	for (int i = 0; i < N; i++) {
		cout << tab[i]<<", ";
	}
	return 0;
}
