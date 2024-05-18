#include <iostream>
#include <vector>

int main()
{
	// enum Color {
	// 	red, green, blue
	// };
	// Color screen_color {green};

	// switch (screen_color) {
	// 	case red: std::cout << "red"; break;
	// 	case green: std::cout << "green"; break;
	// 	case blue: std::cout << "blue"; break;
	// 	default: std::cout << "should never be executed";
	// }

	// int num {};
	// std::cout << "Enter an integer: ";
	// std::cin >> num;	
	// std::cout << num << " is " << ((num % 2 == 0) ? "even" : "odd" ) << std::endl;

	// for (int i{1}; i <= 10; i++)
	// for (int i{i}, j{5}; i<=5; ++i; ++j)
	// for (;;)
	
	// vector <int> nums { 10,20,30,40,50 };
	// for (unsigned int i{0}; i < nums.size(); ++i)
	// 		cout << nums.at(i) << endl;
	
    // for (int i{1}; i <= 15; i++)
    //     sum += (i % 2 != 0) ? i : 0;
	
	// int scores [] {100,.90, 97};
	// for (int score : scores)
	// 		cout << score << endl;

	// for (auto score: scores)
	//		cout << score << endl;

	// for (auto c: "Frank")
	//		cout << c << endl;

	// double average_temp {};
	// double running_sum {};
	// int size {0};
	// for (auto temp: {60.2, 80.1, 90.0, 78.2} ) {
	// 	running_sum += temp;
	// 	++size;
	// }'
	// average_temp = running_sum / size; ()
	
	std::vector<int> vec {1, 2, 3, 4, 5};

	while (true) {
		std::cout << "\nP - Print numbers" << std::endl;
		std::cout << "A - Add a number" << std::endl;
		std::cout << "M - Display mean of the numbers" << std::endl;
		std::cout << "S - Display the smallest number" << std::endl;
		std::cout << "L - Display the largest number" << std::endl;
		std::cout << "Q - Quit" << std::endl;
		std::cout << "\nEnter your choice: ";
		
		char option {};
		std::cin >> option;

		if (option == 'P' || option == 'p') {
			if (vec.size() == 0)
				std::cout << "[] - the list is empty" << std::endl ;
			else {
				std::cout << "[ ";
				for (auto num : vec)
					std::cout << num << " ";
				std::cout << "]" << std::endl;
			}
		}

		else if (option == 'A' || option == 'a') {
			std::cout << "Please enter a number to be added to the list: ";
			int new_element {0};
			std::cin >> new_element;
			vec.push_back(new_element);
			std::cout << new_element << " added" << std::endl;
		}

		else if (option == 'M' || option == 'm') {
			if (vec.size() == 0)
				std::cout << "Unable to calculate the mean - no data" << std::endl;
			else {
				double sum {0};
				for (auto num : vec)
					sum += num;
				std::cout << "The average of the numbers is: " << sum/vec.size() << std::endl;
			}
		}

		else if (option == 'S' || option == 's') {
			if (vec.size() == 0)
				std::cout << "Unable to determine the smallest number - list is empty" << std::endl;
			else {
				int current_min {vec.at(0)};
				for (auto num : vec) {
					if (num < current_min)
						current_min = num;
				}
				std::cout << "The smallest number is " << current_min << std::endl;
			}
		}

		else if (option == 'L' || option == 'l') {
			if (vec.size() == 0)
				std::cout << "Unable to determine the largest number - list is empty" << std::endl;
			else {
				int current_max {vec.at(0)};
				for (auto num : vec) {
					if (num > current_max)
						current_max = num;
				}
				std::cout << "The largest number is " << current_max << std::endl;
			}
		}

		else if (option == 'Q' || option == 'q') {
			std::cout << "Goodbye" << std::endl;
			break;
		}
	}

	std::cout << std::endl;
	return 0;
}