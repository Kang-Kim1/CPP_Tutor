#include <iostream>
#include <string>

// What is namespace?
//using namespace std;

void callByValue(int x, int y) {
	int temp;
	temp = x;
	x = y;
	y = temp;

}

void callByReference(int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main() {

	int a = rand() % 100;
	bool b = 0;
	int c = 5;
	int guess;

	std::string name;
	std::cout << "What is your username? ";
	getline(std::cin, name);
	while (b == 0) {
		std::cout << "Guess my number? ";
		std::cin >> guess;
		if (guess == 8989) {
			std::cout << a << "\n";
		}
		if (guess >= a - 5 && guess <= a + 5) {
			if (guess == a) {
				std::cout << "Correct!\n";
				std::cout << name << " wins!";
				b = 1;
			} else {
				std::cout << "Your getting close.\n";
			}
		}
		c--;
		if (c == 0) {
			b = 1;
		}

	}
//  cout << "enter your age : " ;
//  cin >> i;
//  cout << "Entered age : " << i <<endl;

//	int i_arr[] = { 1, 2, 3, 4, 5, 6 };
//	int *ptr = &i_arr[2];
//
//	cout << *ptr << endl;

return 0;

}
