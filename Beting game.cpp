#include <iostream>
#include <stdlib.h>
#include <time.h>

int win = 0;
int gambleValue = rand() % 2 + 1;
int money = 10;
int betAmount = 0;
int flipValue = 0;

int main() {
	for( ; ; ) {
		gambleValue = rand() % 2 + 1;
		
		std::cout << "You have " << money << "$\n";
		std::cout << "bet an amount";
		std::cin >> betAmount;
		std::cout << "1 or 2?";
		std::cin >> flipValue;
			if (flipValue == gambleValue) {
				money = money + betAmount;
				std::cout << "you win\n";
				std::cout << "you now have " << money << "$\n\n";
		}
		if (flipValue != gambleValue) {
			money = money - betAmount;
			std::cout << "you lose\n";
			std::cout << "you now have " << money << "$\n\n";
		}
	}
	return 0;
}
