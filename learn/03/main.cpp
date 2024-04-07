#include <iostream>
#include <vector>

int main()
{
	// std::vector <char> vowels {'a','e','i','o','u'};
	// std::vector <int> test_scores {100, 98, 89, 85, 93};
	// std::vector <double> hi_temperatures (365, 80.0); -- This will create a vector with 365 positions and initialize them all to 80.0

	// test_scores[5] -- no bounds checking
	// test_scores.at(5) -- safer way

	// test_scores.push_back(90); // create another element at the end of the vector and automatically allocate space

	// test_scores.size() -- returns the number of elements in the vector

	// std::vector <std::vector<int>> movie_ratings
	// {
	// 	{ 1, 2, 3, 4},
	// 	{ 1, 2, 3, 4},
	// 	{ 1, 2, 3, 4}
	// };

	// movie_ratings.at(0).at(1) = 10;

	std::vector <int> vector1;
	std::vector <int> vector2;

	vector1.push_back(10);
	vector1.push_back(20);

	std::cout << "First element on vector1: " << vector1.at(0) << std::endl;
	std::cout << "Second element on vector1: " << vector1.at(1) << std::endl;
	std::cout << "Total size of vector1: " << vector1.size() << std::endl;

	vector2.push_back(100);
	vector2.push_back(200);

	std::cout << "First element on vector2: " << vector2.at(0) << std::endl;
	std::cout << "Second element on vector2: " << vector2.at(1) << std::endl;
	std::cout << "Total size of vector2: " << vector2.size() << std::endl;

	std::vector <std::vector<int>> vector_2d;

	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);

	std::cout << "[0][0] element on vector_2d: " << vector_2d.at(0).at(0) << std::endl;
	std::cout << "[0][1] element on vector_2d: " << vector_2d.at(0).at(1) << std::endl;
	std::cout << "[1][0] element on vector_2d: " << vector_2d.at(1).at(0) << std::endl;
	std::cout << "[1][1] element on vector_2d: " << vector_2d.at(1).at(1) << std::endl;

	vector1.at(0) = 1000;

	std::cout << "[0][0] element on vector_2d: " << vector_2d.at(0).at(0) << std::endl;
	std::cout << "[0][1] element on vector_2d: " << vector_2d.at(0).at(1) << std::endl;
	std::cout << "[1][0] element on vector_2d: " << vector_2d.at(1).at(0) << std::endl;
	std::cout << "[1][1] element on vector_2d: " << vector_2d.at(1).at(1) << std::endl;

	std::cout << "First element on vector1: " << vector1.at(0) << std::endl;
	std::cout << "Second element on vector1: " << vector1.at(1) << std::endl;
	std::cout << "Total size of vector1: " << vector1.size() << std::endl;


	std::cout << std::endl;
	return 0;
}