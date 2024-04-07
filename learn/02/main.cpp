#include <iostream>

int main()
{
	std::cout << "Hello, welcome to Frank's Carpet Cleaning Service" << std::endl;
	std::cout << "\nHow many small rooms would you like cleaned?" << std::endl;

	int number_of_small_rooms {0};
	std::cin >> number_of_small_rooms;

	std::cout << "How many large rooms would you like cleaned?" << std::endl;
	
	int number_of_large_rooms {0};
	std::cin >> number_of_large_rooms;

	const double price_per_small_room {25.0};
	const double price_per_large_room {35.0};
	const double sales_tax {0.06};
	const int estimate_expiry {30};

	double total_cost = (price_per_large_room * number_of_large_rooms) + (price_per_small_room * number_of_small_rooms);
	double total_tax = total_cost * sales_tax;
	double final_estimate = total_cost + total_tax;

	std::cout << "\nEstimate for carpet cleaning service" << std::endl;
	std::cout << "Number of small rooms: " << number_of_small_rooms << std::endl;
	std::cout << "Number of small rooms: " << number_of_large_rooms << std::endl;
	std::cout << "Price per small room: $" << price_per_small_room << std::endl;
	std::cout << "Price per small room: $" << price_per_large_room << std::endl;
	std::cout << "Cost: $" << total_cost << std::endl;
	std::cout << "Tax: $" << total_tax << std::endl;
	std::cout << "======================================" << std::endl;
	std::cout << "Total estimate: $" << final_estimate << std::endl;
	std::cout << "This estimate is valid for " << estimate_expiry << " days" << std::endl;

	std::cout << std::endl;
	return 0;
}