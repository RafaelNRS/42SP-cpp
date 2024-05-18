#include <iostream>

int main()
{
	// average = statis_cast<double>(total) / count;
	// average = (double)total / count; -- old style

	// bool equal_result {false};
	// std::cout << std::boolalpha; -- now it converts 1 and 0 to true and false
	// std::cout << std::noboolalpha; -- disables the previous statement

	// std::cout << fixed << setprecision(2); -- prints dollars nicely

	int amount_in_cents {};
	int dollars {}, quarters {}, dimes {}, nickels {}, pennies {};

	std::cout << "Enter an amount in cents: ";
	std::cin >> amount_in_cents;

	if (amount_in_cents >= 100) {
		dollars = amount_in_cents / 100;
		amount_in_cents %= 100;
	}
	if (amount_in_cents >= 25) {
		quarters = amount_in_cents / 25;
		amount_in_cents %= 25;
	}
	if (amount_in_cents >= 10) {
		dimes = amount_in_cents / 10;
		amount_in_cents %= 10;
	}
	if (amount_in_cents >= 5) {
		nickels = amount_in_cents / 5;
		amount_in_cents %= 5;
	}
	if (amount_in_cents >= 1) {
		pennies = amount_in_cents;
	}

	std::cout << "\nYou can provide this change as follows: " << std::endl;
	std::cout << "dollars: " << dollars << std::endl;
	std::cout << "quarters: " << quarters << std::endl;
	std::cout << "dimes: " << dimes << std::endl;
	std::cout << "nickels: " << nickels << std::endl;
	std::cout << "pennies: " << pennies << std::endl;

	std::cout << std::endl;
	return 0;
}