#include <iostream>

int main() {
	for( int i = 0; i < 100; ++i ){
		std::cout << i << ".\n";

		for( int shift = 7; shift >= 0; --shift ){
			int bit = i;
			bit = bit >> shift;
			bit = bit & 0x1;
			std::cout << bit;
		}

		std::cout << "\n";
	}
}