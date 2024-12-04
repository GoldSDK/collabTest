#include <iostream>
#include "suka.h"
int main() {
	int choice;
	std::cin >> choice;
	switch(choice) {
		case 1:
			helloworld();
			break;
		case 2:
			byeworld();
			break;
	}
	return 0;
}
